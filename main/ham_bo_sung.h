#ifndef _ham_bo_sung_h
#define _ham_bo_sung_h

void ssd1306_init();
void task_ssd1306_display_text(const void *arg_text);
void task_ssd1306_display_clear(void *ignore);
void task_ssd1306_display_picture();

#endif
