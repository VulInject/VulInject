void
FUN1(db_expr_t VAR1, int VAR2, db_expr_t VAR3, char *VAR4)
{
struct VAR5 *VAR6;
char *VAR7;
CPU_INFO_ITERATOR VAR8;
int VAR9 = 0;

FUN2(VAR8, VAR6) {
if (VAR6->VAR10[0] != '') {
VAR7 = (VAR11 == VAR6->VAR10) ? "" : "";
FUN3("",
VAR7, FUN4(VAR6), VAR6->VAR10);
VAR9 = 1;
}
}
if (!VAR9)
FUN3("");	
}