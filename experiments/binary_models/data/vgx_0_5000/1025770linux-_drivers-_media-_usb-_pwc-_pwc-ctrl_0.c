int pwc_get_cmos_sensor(struct pwc_device *pdev, int *sensor)
{
int ret, request;

if (pdev->type < 675)
request = SENSOR_TYPE_FORMATTER1;
else if (pdev->type < 730)
return -1; 
else
request = SENSOR_TYPE_FORMATTER2;

ret = recv_control_msg(pdev, GET_STATUS_CTL, request, 1);
if (ret < 0)
return ret;
if (pdev->type < 675)
*sensor = pdev->ctrl_buf[0] | 0x100;
else
*sensor = pdev->ctrl_buf[0];
return 0;
}