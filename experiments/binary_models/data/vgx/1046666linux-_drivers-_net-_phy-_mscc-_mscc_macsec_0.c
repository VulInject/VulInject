static int FUN1(const VAR1 *VAR2, u16 VAR3, u8 VAR4[16])
{
const u8 VAR5[VAR6] = {0};
struct crypto_aes_ctx VAR7;
int VAR8;

VAR8 = FUN2(&VAR7, VAR2, VAR3);
if (VAR8)
return VAR8;

FUN3(&VAR7, VAR4, VAR5);
FUN4(&VAR7, sizeof(VAR7));
return 0;
}