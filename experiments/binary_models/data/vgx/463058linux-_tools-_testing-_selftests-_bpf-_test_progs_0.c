int FUN1(useconds_t VAR1)
{
struct timespec VAR2 = {
.VAR3 = VAR1 / 1000000,
.VAR4 = (VAR1 % 1000000) * 1000,
};

return FUN2(VAR5, &VAR2, NULL);
}