void
FUN1(void)
{

static build_valid_func VAR1[1] = {VAR2};
static decode_as_value_t VAR3 = {VAR4, 1, VAR1};
static decode_as_t VAR5 = {"", "", 1, 0, &VAR3, NULL, NULL,
VAR6, VAR7, VAR8, NULL};


VAR9 = FUN2("", "", "");

FUN3(VAR9);

FUN4("", VAR10, VAR9);


VAR11 = FUN5("",
"", VAR9, VAR12, VAR13);
FUN6("", "");

FUN7(&VAR5);
}