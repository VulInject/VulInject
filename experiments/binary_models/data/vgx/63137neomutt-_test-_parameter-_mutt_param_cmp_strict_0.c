void FUN1(void)
{


{
struct ParameterList VAR1 = { 0 };
FUN2(FUN3(NULL, &VAR1));
}

{
struct ParameterList VAR1 = { 0 };
FUN2(FUN3(&VAR1, NULL));
}
}