static void item_input(SBAR_ITEM_REC *item, int get_size_only)
{
GUI_ENTRY_REC *rec;

rec = g_hash_table_lookup(input_entries, item->bar->config->name);
if (rec == NULL) {
rec = gui_entry_create(ITEM_WINDOW_REAL_XPOS(item), item->bar->real_ypos,
item->size, term_type == TERM_TYPE_UTF8);
gui_entry_set_active(rec);
g_hash_table_insert(input_entries,
g_strdup(item->bar->config->name), rec);
}

if (get_size_only) {
int max_width;
WINDOW_REC *window;

window = item->bar->parent_window != NULL
? item->bar->parent_window->active
: NULL;

max_width = window != NULL ? window->width : term_width;

item->min_size = 2+max_width/10;
item->max_size = max_width;
return;
}

gui_entry_move(rec, ITEM_WINDOW_REAL_XPOS(item), item->bar->real_ypos,
item->size);
gui_entry_redraw(rec); 
}