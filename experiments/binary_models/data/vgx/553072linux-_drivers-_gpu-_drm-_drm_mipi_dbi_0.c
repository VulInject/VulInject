int FUN1(struct VAR1 *VAR2, u32 VAR3,
u8 VAR4, const void *VAR5, size_t VAR6)
{
size_t VAR7 = FUN2(VAR2);
struct spi_transfer VAR8 = {
.VAR9 = VAR4,
.VAR3 = VAR3,
};
struct spi_message VAR10;
size_t VAR11;
int VAR12;


VAR7 = FUN3(VAR7, 2);

FUN4(&VAR10, &VAR8, 1);

while (VAR6) {
VAR11 = FUN5(VAR6, VAR7);

VAR8.VAR13 = VAR5;
VAR8.VAR6 = VAR11;
VAR5 += VAR11;
VAR6 -= VAR11;

VAR12 = FUN6(VAR2, &VAR10);
if (VAR12)
return VAR12;
}

return 0;
}