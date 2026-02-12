bool
image_flip(image_t* it, bool is_h_flip, bool is_v_flip)
{
int             draw_flags = 0x0;
ALLEGRO_BITMAP* new_bitmap;
ALLEGRO_BITMAP* old_target;

if (!is_h_flip && !is_v_flip)  
return true;
uncache_pixels(it);
if (!(new_bitmap = al_create_bitmap(it->width, it->height)))
return false;
old_target = al_get_target_bitmap();
al_set_target_bitmap(new_bitmap);
if (is_h_flip)
draw_flags |= ALLEGRO_FLIP_HORIZONTAL;
if (is_v_flip)
draw_flags |= ALLEGRO_FLIP_VERTICAL;
al_draw_bitmap(it->bitmap, 0, 0, draw_flags);
al_set_target_bitmap(old_target);
al_destroy_bitmap(it->bitmap);
it->bitmap = new_bitmap;
return true;
}