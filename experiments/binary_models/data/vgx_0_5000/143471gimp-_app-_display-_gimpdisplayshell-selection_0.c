selection_zoom_segs (Selection          *selection,
const GimpBoundSeg *src_segs,
GimpSegment        *dest_segs,
gint                n_segs,
gint                canvas_offset_x,
gint                canvas_offset_y)
{
const gint xclamp = selection->shell->disp_width + 1;
const gint yclamp = selection->shell->disp_height + 1;
gint       i;

gimp_display_shell_zoom_segments (selection->shell,
src_segs, dest_segs, n_segs,
0.0, 0.0);

for (i = 0; i < n_segs; i++)
{
if (! selection->shell->rotate_transform)
{
dest_segs[i].x1 = CLAMP (dest_segs[i].x1, -1, xclamp) + canvas_offset_x;
dest_segs[i].y1 = CLAMP (dest_segs[i].y1, -1, yclamp) + canvas_offset_y;

dest_segs[i].x2 = CLAMP (dest_segs[i].x2, -1, xclamp) + canvas_offset_x;
dest_segs[i].y2 = CLAMP (dest_segs[i].y2, -1, yclamp) + canvas_offset_y;
}


if (! src_segs[i].open)
{

if (dest_segs[i].x1 == dest_segs[i].x2)
{
dest_segs[i].x1 -= 1;
dest_segs[i].x2 -= 1;
}
else
{
dest_segs[i].y1 -= 1;
dest_segs[i].y2 -= 1;
}
}
}
}