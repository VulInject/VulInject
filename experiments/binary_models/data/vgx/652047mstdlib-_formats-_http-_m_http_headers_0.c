void FUN1(VAR1 *VAR2, M_textcodec_codec_t VAR3)
{
VAR4 *VAR5;
char             VAR6[256];

VAR5 = FUN2(VAR2->VAR7, "");
if (VAR5 == NULL)
return;

VAR2->VAR3   = VAR3;
FUN3(VAR2->VAR8);
VAR2->VAR8 = FUN4(FUN5(VAR3));

FUN6(VAR6, sizeof(VAR6), "", VAR2->VAR9, VAR2->VAR8);
FUN7(VAR5, VAR6);
}