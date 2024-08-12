static void FUN1( void )
{
float VAR1,VAR2,VAR3,VAR4;
long VAR5;

VAR1 = (1.77200f/2.0f) * (float)(1<<6) + 0.5f;
VAR2 = (1.40200f/2.0f) * (float)(1<<6) + 0.5f;
VAR3 = (0.34414f/2.0f) * (float)(1<<6) + 0.5f;
VAR4 = (0.71414f/2.0f) * (float)(1<<6) + 0.5f;
for(VAR5=0;VAR5<256;VAR5++) {
float VAR6 = (float)(2 * VAR5 - 255);

VAR7[VAR5] = (long)( ( VAR1 * VAR6) + (1<<5));
VAR8[VAR5] = (long)( ( VAR2 * VAR6) + (1<<5));
VAR9[VAR5] = (long)( (-VAR3 * VAR6)		 );
VAR10[VAR5] = (long)( (-VAR4 * VAR6) + (1<<5));
VAR11[VAR5] = (long)( (VAR5 << 6) | (VAR5 >> 2) );
}
}