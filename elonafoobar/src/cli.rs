use crate::version::{VARIANT_LONG_STRING, VARIANT_SHORT_STRING};
use clap::{App, Arg};
use elonafoobar_log::info;

#[derive(Debug)]
pub struct CliOptions {
    pub profile: Option<String>,
    pub headless: bool,
}

#[derive(Debug)]
pub enum ParseResult {
    Ok(CliOptions),
    Err(clap::Error),
    Help,    // -h or --help
    Version, // -v or --version
}

// Log given command line arguments.
pub fn print_args() {
    for (i, arg) in std::env::args_os().enumerate() {
        info!("argv[{}] = {}", i, arg.to_string_lossy());
    }
}

// Parse command line arguments.
pub fn parse_args() -> ParseResult {
    let matches = make_arg_parser(VARIANT_SHORT_STRING, VARIANT_LONG_STRING).get_matches_safe();
    match matches {
        Ok(matches) => ParseResult::Ok(CliOptions {
            profile: matches.value_of("profile").map(ToOwned::to_owned),
            headless: matches.is_present("headless"),
        }),
        Err(err) if err.kind == clap::ErrorKind::HelpDisplayed => {
            println!("{}", err.message); // Output help message, which is not output by clap.
            ParseResult::Help
        }
        Err(err) if err.kind == clap::ErrorKind::VersionDisplayed => {
            println!(); // Append a new line at the end, which is not output by clap.
            ParseResult::Version
        }
        Err(err) => ParseResult::Err(err),
    }
}

fn make_arg_parser<'a, 'b>(version: &'b str, long_version: &'b str) -> App<'a, 'b> {
    App::new("Elona foobar")
        .version(version)
        .long_version(long_version)
        .version_short("v")
        .about("Yet another Elona variant to build your own Elona")
        .arg(
            Arg::with_name("profile")
                .short("p")
                .long("profile")
                .value_name("PROFILE")
                .help("Sets a profile"),
        )
        .arg(
            Arg::with_name("headless")
                .short("H")
                .long("headless")
                .help("Enables headless mode (no GUI mode)"),
        )
}
