(++) Configure these FMC pins in alternate function mode by calling the function
GPIO_Init();    

(#) Declare a FMC_NORSRAMInitTypeDef structure, for example:
FMC_NORSRAMInitTypeDef  FMC_NORSRAMInitStructure;
and fill the FMC_NORSRAMInitStructure variable with the allowed values of
the structure member.

(#) Initialize the NOR/SRAM Controller by calling the function
FMC_NORSRAMInit(&FMC_NORSRAMInitStructure); 

(#) Then enable the NOR/SRAM Bank, for example:
FMC_NORSRAMCmd(FMC_Bank1_NORSRAM2, ENABLE);  

(#) At this stage you can read/write from/to the memory connected to the NOR/SRAM Bank. 

@endverbatim
* @{
*/


void FMC_NORSRAMDeInit(uint32_t FMC_Bank)
{

assert_param(IS_FMC_NORSRAM_BANK(FMC_Bank));


if(FMC_Bank == FMC_Bank1_NORSRAM1)
{
FMC_Bank1->BTCR[FMC_Bank] = 0x000030DB;    
}

else
{   
FMC_Bank1->BTCR[FMC_Bank] = 0x000030D2; 
}
FMC_Bank1->BTCR[FMC_Bank + 1] = 0x0FFFFFFF;
FMC_Bank1E->BWTR[FMC_Bank] = 0x0FFFFFFF;  
}