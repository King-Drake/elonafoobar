pub mod app;
mod error;
mod font_cache;

pub use app::{App, TextAlignment, TextBaseline};
pub use sdl2::pixels::Color;
pub use sdl2::rect::{Point, Rect};
pub use sdl2::ttf::FontStyle;
pub use sdl2::video::FullscreenType;