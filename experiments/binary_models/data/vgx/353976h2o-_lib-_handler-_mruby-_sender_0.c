void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int VAR7)
{
assert(!VAR4->VAR8);

h2o_iovec_t VAR9 = FUN2(VAR4, VAR6, VAR2->VAR10->VAR11);
size_t VAR12 = 1;
h2o_send_state_t VAR13;

if (VAR7 && VAR9.VAR14 == VAR4->VAR9->VAR15 && (*VAR6)->VAR15 == 0) {
if (VAR9.VAR14 == 0)
--VAR12;
VAR13 = VAR16;
} else {
if (VAR9.VAR14 == 0)
return;
VAR13 = VAR17;
}

h2o_sendvec_t VAR18;
FUN3(&VAR18, VAR9.VAR19, VAR9.VAR14);
FUN4(VAR2, &VAR18, VAR12, VAR13);
}