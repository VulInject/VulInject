static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
struct VAR4 *VAR5 = VAR3->VAR5;

FUN3(VAR5);
VAR3->VAR5 = NULL;
}

static struct VAR6 *VAR7[] = {
&VAR8.VAR9,
&VAR10.VAR9,
NULL,
};