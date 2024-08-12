static int FUN1(struct VAR1 *VAR2, const unsigned char *VAR3, size_t VAR4)
{
struct VAR5 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR5->VAR7;

if (!FUN3(VAR8, &VAR5->VAR9))
return 0;

FUN4(VAR10, &VAR7->VAR9);
return VAR7->VAR11->write(VAR5->VAR7, VAR3, VAR4);
}