static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
static const quicly_stream_callbacks_t VAR5 = {
VAR6, VAR7, VAR8, VAR9, VAR10,
VAR11};
int VAR12;

if ((VAR12 = FUN2(VAR4, sizeof(VAR13))) != 0)
return VAR12;
VAR4->VAR14 = &VAR5;
return 0;
}