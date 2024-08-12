int FUN1(swp_entry_t VAR1)
{
struct VAR2 *VAR3;

VAR3 = &FUN2(VAR4);
if (VAR5 && VAR3->VAR6) {
FUN3(&VAR3->VAR7);

if (!VAR5) {
FUN4(&VAR3->VAR7);
goto VAR8;
}
if (VAR3->VAR9 >= VAR10) {

FUN5(VAR3->VAR6, VAR3->VAR9);
VAR3->VAR9 = 0;
}
VAR3->VAR6[VAR3->VAR9++] = VAR1;
FUN4(&VAR3->VAR7);
} else {
VAR8:
FUN5(&VAR1, 1);
}
FUN6(VAR4);

return 0;
}