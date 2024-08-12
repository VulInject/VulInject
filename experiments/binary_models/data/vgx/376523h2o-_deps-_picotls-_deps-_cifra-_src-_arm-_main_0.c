static void FUN1(void)
{
uint8_t VAR1[16] = { 0 };
cf_aes_context VAR2;
FUN2(&VAR2, VAR1, sizeof VAR1);

uint8_t VAR3[16] = { 0 };
uint8_t VAR4[16] = { 0 };
uint8_t VAR5[12] = { 0 };
uint8_t VAR6[16] = { 0 };
uint8_t VAR7[16] = { 0 };

FUN3(&VAR8, &VAR2,
VAR3, sizeof VAR3,
VAR4, sizeof VAR4,
VAR5, sizeof VAR5,
VAR6,
VAR7, sizeof VAR7);
}