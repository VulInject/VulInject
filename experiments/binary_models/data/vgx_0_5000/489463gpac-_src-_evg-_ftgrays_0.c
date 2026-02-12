static int EVG_Outline_Decompose(EVG_Outline *outline, GF_EVGSurface *surf)
{
EVG_Vector   v_start;
int   n;         
int   first;     
TPos _x, _y;

first = 0;
for ( n = 0; n < outline->n_contours; n++ ) {
EVG_Vector *point;
EVG_Vector *limit;
int  last;  
last  = outline->contours[n];
limit = outline->points + last;
v_start = outline->points[first];
point = outline->points + first;
gray_move_to(&v_start, surf);
while ( point < limit ) {
point++;
evg_translate_point(surf->mx, point, &_x, &_y);
gray_render_line(surf, _x, _y);
}

evg_translate_point(surf->mx, &v_start, &_x, &_y);
gray_render_line(surf, _x, _y);
first = last + 1;
}
return 0;
}