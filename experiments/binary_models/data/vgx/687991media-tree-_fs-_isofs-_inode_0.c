static int FUN1(struct VAR1 *VAR1, sector_t VAR2,
struct VAR3 *VAR4, int VAR5)
{
int VAR6;

if (VAR5) {
FUN2(VAR7 "", VAR8);
return -VAR9;
}

VAR6 = FUN3(VAR1, VAR2, &VAR4, 1);
return VAR6 < 0 ? VAR6 : 0;
}