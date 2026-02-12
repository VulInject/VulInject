ev_page_accessible_set_selection (AtkText *text,
gint	   selection_num,
gint     start_pos,
gint     end_pos)
{
EvPageAccessible *self = EV_PAGE_ACCESSIBLE (text);
EvView *view = ev_page_accessible_get_view (self);
EvRectangle *areas = NULL;
guint n_areas = 0;
GdkRectangle start_rect, end_rect;
GdkPoint start_point, end_point;

ev_page_cache_get_text_layout (view->page_cache, self->priv->page, &areas, &n_areas);
if (start_pos < 0 || end_pos >= n_areas)
return FALSE;

_ev_view_transform_doc_rect_to_view_rect (view, self->priv->page, areas + start_pos, &start_rect);
_ev_view_transform_doc_rect_to_view_rect (view, self->priv->page, areas + end_pos - 1, &end_rect);
start_point.x = start_rect.x;
start_point.y = start_rect.y;
end_point.x = end_rect.x + end_rect.width;
end_point.y = end_rect.y + end_rect.height;
_ev_view_set_selection (view, &start_point, &end_point);

return TRUE;
}