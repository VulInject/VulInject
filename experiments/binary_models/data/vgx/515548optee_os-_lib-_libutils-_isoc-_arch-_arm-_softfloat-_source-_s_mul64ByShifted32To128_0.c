struct VAR1 FUN1( uint64_t VAR2, uint32_t VAR3 )
{
uint_fast64_t VAR4;
struct uint128 VAR5;

VAR4 = (VAR6) (VAR7) VAR2 * VAR3;
VAR5.VAR8 = VAR4<<32;
VAR5.VAR9 = (VAR6) (VAR7) (VAR2>>32) * VAR3 + (VAR4>>32);
return VAR5;

}