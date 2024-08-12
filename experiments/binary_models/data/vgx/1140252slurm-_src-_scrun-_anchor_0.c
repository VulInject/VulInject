static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
con_mgr_work_type_t VAR5, con_mgr_work_status_t VAR6,
const char *VAR7, void *VAR8)
{
int VAR9;
bool VAR10;

FUN2(!VAR8);

FUN3();
FUN2(VAR11.VAR6 >= VAR12);
FUN2(!VAR11.VAR13);
FUN4("", VAR14, VAR11.VAR15);
VAR10 = VAR11.VAR10;
FUN5();

if (VAR10) {
VAR9 = FUN6();
} else {
VAR9 = VAR16;
FUN4("",
VAR14);
}

if (FUN7() >= VAR17) {
FUN3();
FUN4("",
VAR14, VAR11.VAR15, FUN8(VAR9));
FUN5();
}

FUN9();
FUN2(!VAR11.VAR13);
VAR11.VAR13 = true;
FUN5();

FUN10(VAR18, NULL, VAR19,
VAR20, NULL, VAR14);
}