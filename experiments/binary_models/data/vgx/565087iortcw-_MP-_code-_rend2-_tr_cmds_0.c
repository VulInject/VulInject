void FUN1( float VAR1, float VAR2, float VAR3, float VAR4,
float VAR5, float VAR6, float VAR7, float VAR8, qhandle_t VAR9, const float *VAR10, int VAR11 ) {
VAR12 *VAR13;

VAR13 = FUN2( sizeof( *VAR13 ) );
if ( !VAR13 ) {
return;
}
VAR13->VAR14 = VAR15;
VAR13->VAR16 = FUN3( VAR9 );
VAR13->VAR1 = VAR1;
VAR13->VAR2 = VAR2;
VAR13->VAR3 = VAR3;
VAR13->VAR4 = VAR4;
VAR13->VAR5 = VAR5;
VAR13->VAR6 = VAR6;
VAR13->VAR7 = VAR7;
VAR13->VAR8 = VAR8;

if ( !VAR10 ) {
static float VAR17[4] = { 1, 1, 1, 1 };

VAR10 = VAR17;
}

VAR13->VAR10[0] = VAR10[0] * 255;
VAR13->VAR10[1] = VAR10[1] * 255;
VAR13->VAR10[2] = VAR10[2] * 255;
VAR13->VAR10[3] = VAR10[3] * 255;
VAR13->VAR11 = VAR11;
}