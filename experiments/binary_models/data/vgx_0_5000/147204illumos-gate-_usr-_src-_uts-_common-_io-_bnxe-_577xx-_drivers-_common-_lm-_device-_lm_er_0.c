lm_status_t lm_er_leader_reset(lm_device_t *pdev)
{
lm_status_t lm_status = LM_STATUS_SUCCESS;
u32_t       cnt       = 1;
u8_t        reset_mcp = FALSE;
u8_t        function_of_opposite_path = 0;



function_of_opposite_path = !PATH_ID(pdev);
do
{
lm_status = lm_er_process_kill(pdev, reset_mcp);
if (lm_status != LM_STATUS_SUCCESS)
{
break;
}


if (!reset_mcp)
{
lm_pretend_func(pdev, function_of_opposite_path); 

reset_mcp = TRUE; 
}
} while (cnt--);


lm_pretend_func(pdev, ABS_FUNC_ID(pdev));    

return lm_status;
}