sfe_dump_format_map (void)
{	SF_FORMAT_INFO	info ;
int k ;

for (k = 0 ; k < ARRAY_LEN (format_map) ; k++)
{	info.format = format_map [k].format ;
sf_command (NULL, SFC_GET_FORMAT_INFO, &info, sizeof (info)) ;
printf ("        %-10s : %s", format_map [k].ext, info.name == NULL ? "????" : info.name) ;
if (format_map [k].format & SF_FORMAT_SUBMASK)
{	info.format = format_map [k].format & SF_FORMAT_SUBMASK ;
sf_command (NULL, SFC_GET_FORMAT_INFO, &info, sizeof (info)) ;
printf (" %s", info.name == NULL ? "????" : info.name) ;
} ;
putchar ('\n') ;

} ;

} 