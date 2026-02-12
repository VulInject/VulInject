static void SNDDMA_PrintAudiospec(const char *str, const SDL_AudioSpec *spec)
{
int		i;
char	*fmt = NULL;

Com_Printf("%s:\n", str);

for( i = 0; i < formatToStringTableSize; i++ ) {
if( spec->format == formatToStringTable[ i ].enumFormat ) {
fmt = formatToStringTable[ i ].stringFormat;
}
}

if( fmt ) {
Com_Printf( "  Format:   %s\n", fmt );
} else {
Com_Printf( "  Format:   " S_COLOR_RED "UNKNOWN\n");
}

Com_Printf( "  Freq:     %d\n", (int) spec->freq );
Com_Printf( "  Samples:  %d\n", (int) spec->samples );
Com_Printf( "  Channels: %d\n", (int) spec->channels );
}