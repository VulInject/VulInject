lin_to_rgb (const gdouble  hr,
const gdouble  hg,
const gdouble  hb,
guchar        *r,
guchar        *g,
guchar        *b)
{
gfloat  rgb[3];
gfloat  lab[3];
gdouble ir, ig, ib;

ir = ((gdouble) (hr)) * 255.0F / (gdouble) (HIST_R_ELEMS - 1);
ig = ((gdouble)( hg)) * 255.0F / (gdouble) (HIST_G_ELEMS - 1);
ib = ((gdouble)( hb)) * 255.0F / (gdouble) (HIST_B_ELEMS - 1);

ir = ir / LRAT;
ig = (ig / ARAT) + LOWA;
ib = (ib / BRAT) + LOWB;

lab[0] = ir;
lab[1] = ig;
lab[2] = ib;

babl_process (lab_to_rgb_fish, lab, rgb, 1);

*r = RINT (CLAMP (rgb[0] * 255, 0.0F, 255.0F));
*g = RINT (CLAMP (rgb[1] * 255, 0.0F, 255.0F));
*b = RINT (CLAMP (rgb[2] * 255, 0.0F, 255.0F));
}



struct _Color
{
gint red;
gint green;
gint blue;
};

struct _QuantizeObj
{
Pass1Func     first_pass;       
Pass2InitFunc second_pass_init; 
Pass2Func     second_pass;      
CleanupFunc   delete_func;      

GimpPalette  *custom_palette;           

gint          desired_number_of_colors; 
gint          actual_number_of_colors;  
Color         cmap[256];                
Color         clin[256];                
guint64       index_used_count[256];    
CFHistogram   histogram;                

gboolean      want_dither_alpha;
gint          error_freedom;            

GimpProgress *progress;
};

typedef struct
{

gint    Rmin, Rmax;
gint    Rhalferror;
gint    Gmin, Gmax;
gint    Ghalferror;
gint    Bmin, Bmax;
gint    Bhalferror;


gint    volume;


gint64  colorcount;


guint64 error;

guint64 rerror;
guint64 gerror;
guint64 berror;

} box, *boxptr;