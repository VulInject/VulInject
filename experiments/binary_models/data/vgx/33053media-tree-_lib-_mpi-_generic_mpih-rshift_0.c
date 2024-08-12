VAR1
FUN1(mpi_ptr_t VAR2, mpi_ptr_t VAR3, mpi_size_t VAR4, unsigned VAR5)
{
mpi_limb_t VAR6, VAR7;
unsigned VAR8, VAR9;
mpi_size_t VAR10;
mpi_limb_t VAR11;

VAR8 = VAR5;
VAR2 -= 1;
VAR9 = VAR12 - VAR8;
VAR6 = VAR3[0];
VAR11 = VAR6 << VAR9;
VAR7 = VAR6;
for (VAR10 = 1; VAR10 < VAR4; VAR10++) {
VAR6 = VAR3[VAR10];
VAR2[VAR10] = (VAR7 >> VAR8) | (VAR6 << VAR9);
VAR7 = VAR6;
}
VAR2[VAR10] = VAR7 >> VAR8;

return VAR11;
}