static int FUN1(const char *VAR1, enum bpf_prog_type VAR2)
{
struct VAR3 *VAR4 = NULL;
struct VAR5 *VAR6;
int VAR7;

VAR4 = FUN2(VAR1, NULL);
VAR7 = FUN3(VAR4);
if (VAR7)
return VAR7;

VAR6 = FUN4(VAR4, NULL);
if (!VAR6) {
VAR7 = -VAR8;
goto VAR9;
}

FUN5(VAR6, VAR2);
FUN6(VAR6, VAR10);
FUN7(VAR6, 4 | VAR11);

VAR7 = FUN8(VAR4);

VAR9:
FUN9(VAR4);
return VAR7;
}

struct VAR12 {
const char *VAR1;
enum bpf_prog_type VAR13;
bool VAR14;
};