#ifndef _NVBOARD_TERM_H
#define _NVBOARD_TERM_H

class Term {
private:
  SDL_Renderer *renderer;
  SDL_Rect region;
  int w_in_char, h_in_char;
  std::vector<uint8_t *> lines;
  int cursor_x, cursor_y;
  SDL_Texture *cursor_texture;
  int screen_y;

  void clear_screen();
  void newline();
  uint8_t *add_line();
  void draw_cursor();

public:
  Term(SDL_Renderer *r, int x, int y, int w, int h);
  ~Term();
  void feed_ch(uint8_t ch);
  void update_gui();
};

#endif
