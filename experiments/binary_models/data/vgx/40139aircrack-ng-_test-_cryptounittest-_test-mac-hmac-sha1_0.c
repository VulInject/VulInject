int main(int argc, char ** argv)
{
size_t VAR1;
int VAR2 = 0;
uint8_t VAR3[VAR4];

(void) argc;

for (VAR1 = 0; VAR1 < FUN1(VAR5); VAR1++)
{
VAR2 |= FUN2(VAR5[VAR1].VAR6,
VAR5[VAR1].VAR7,
VAR5[VAR1].VAR8,
VAR5[VAR1].VAR9,
VAR3);
VAR2 |= FUN3(
VAR3, VAR5[VAR1].VAR10, VAR4, argv[0]);
}

for (VAR1 = 0; VAR1 < FUN1(VAR5); VAR1++)
{
VAR2 |= FUN4(
VAR5[VAR1].VAR6,
VAR5[VAR1].VAR7,
1,
(const VAR11 * []){(VAR11 *) &VAR5[VAR1].VAR9},
&VAR5[VAR1].VAR8,
VAR3);
VAR2 |= FUN3(
VAR3, VAR5[VAR1].VAR10, VAR4, argv[0]);
}

return VAR2;
}