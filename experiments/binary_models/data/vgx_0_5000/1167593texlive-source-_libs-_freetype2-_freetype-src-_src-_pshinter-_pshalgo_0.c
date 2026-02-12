break;

default:
{
PSH_Hint  parent = hint->parent;


if ( parent )
{
FT_Pos  par_org_center, par_cur_center;
FT_Pos  cur_org_center, cur_delta;



if ( !psh_hint_is_fitted( parent ) )
psh_hint_align( parent, globals, dimension, glyph );




par_org_center = parent->org_pos + ( parent->org_len >> 1 );
par_cur_center = parent->cur_pos + ( parent->cur_len >> 1 );
cur_org_center = hint->org_pos   + ( hint->org_len   >> 1 );

cur_delta = FT_MulFix( cur_org_center - par_org_center, scale );
pos       = par_cur_center + cur_delta - ( len >> 1 );
}

hint->cur_pos = pos;
hint->cur_len = fit_len;


if ( glyph->do_stem_adjust )