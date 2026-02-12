


af_sort_and_quantize_widths( &num_widths, axis->widths,
dummy->units_per_em / 100 );
axis->width_count = num_widths;
}

Exit:
for ( dim = 0; dim < AF_DIMENSION_MAX; dim++ )
{
AF_CJKAxis  axis = &metrics->axis[dim];
FT_Pos      stdw;


stdw = ( axis->width_count > 0 ) ? axis->widths[0].org
: AF_LATIN_CONSTANT( metrics, 50 );


axis->edge_distance_threshold = stdw / 5;
axis->standard_width          = stdw;
axis->extra_light             = 0;

{