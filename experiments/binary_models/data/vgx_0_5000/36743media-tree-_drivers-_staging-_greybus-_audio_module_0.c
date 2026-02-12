static int gb_audio_add_mgmt_connection(struct gbaudio_module_info *gbmodule,
struct greybus_descriptor_cport *cport_desc,
struct gb_bundle *bundle)
{
struct gb_connection *connection;


if (gbmodule->mgmt_connection) {
dev_err(&bundle->dev,
"Can't have multiple Management connections\n");
return -ENODEV;
}

connection = gb_connection_create(bundle, le16_to_cpu(cport_desc->id),
gbaudio_codec_request_handler);
if (IS_ERR(connection))
return PTR_ERR(connection);

greybus_set_drvdata(bundle, gbmodule);
gbmodule->mgmt_connection = connection;

return 0;
}