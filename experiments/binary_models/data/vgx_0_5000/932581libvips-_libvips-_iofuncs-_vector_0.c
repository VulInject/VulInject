void
vips_vector_source_scanline( VipsVector *vector, 
char *name, int line, int size )
{
vips_snprintf( name, 256, "sl%d", line );

if( orc_program_find_var_by_name( vector->program, name ) == -1 ) {
int var;

if( !(var = orc_program_add_source( vector->program, 
size, name )) ) 
vips_vector_error( vector );
printf( "orc_program_add_source( %s, %d, \"%s\" );\n",
vector->unique_name, size, name );
vector->sl[vector->n_scanline] = var;
vector->line[vector->n_scanline] = line;
vector->n_scanline += 1;
}
}