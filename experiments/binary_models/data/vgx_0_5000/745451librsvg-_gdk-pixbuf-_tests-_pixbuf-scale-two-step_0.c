test_offset (gconstpointer data)
{
GdkInterpType interp_type = *(GdkInterpType *) data;
const GdkPixbuf *source;                     
gint swidth = SOURCE_WIDTH;                  
gint sheight = SOURCE_HEIGHT;
gint dwidth = (swidth * SCALE_FACTOR + 0.5); 
gint dheight = (sheight * SCALE_FACTOR + 0.5);

source = make_rg (swidth, sheight);


crop_n_compare (source, SCALE_FACTOR, 0,          0,           dwidth / 2, dheight / 2, interp_type);
crop_n_compare (source, SCALE_FACTOR, 0,          dheight / 2, dwidth / 2, dheight / 2, interp_type);
crop_n_compare (source, SCALE_FACTOR, dwidth / 2, 0,           dwidth / 2, dheight / 2, interp_type);
crop_n_compare (source, SCALE_FACTOR, dwidth / 2, dheight / 2, dwidth / 2, dheight / 2, interp_type);
crop_n_compare (source, SCALE_FACTOR, dwidth / 4, dheight / 4, dwidth / 2, dheight / 2, interp_type);

g_object_unref (G_OBJECT (source));
}