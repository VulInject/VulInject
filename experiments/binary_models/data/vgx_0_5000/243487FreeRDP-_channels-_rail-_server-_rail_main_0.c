static UINT rail_write_exec_result_order(wStream* s, const RAIL_EXEC_RESULT_ORDER* execResult)
{
if (!s || !execResult)
return ERROR_INVALID_PARAMETER;

if (execResult->exeOrFile.length > 520 || execResult->exeOrFile.length < 1)
return ERROR_INVALID_DATA;

Stream_Write_UINT16(s, execResult->flags);            
Stream_Write_UINT16(s, execResult->execResult);       
Stream_Write_UINT32(s, execResult->rawResult);        
Stream_Write_UINT16(s, 0);                            
Stream_Write_UINT16(s, execResult->exeOrFile.length); 
Stream_Write(s, execResult->exeOrFile.string,
execResult->exeOrFile.length); 
return ERROR_SUCCESS;
}