static int aclk_https_request(https_req_t *request, https_req_response_t *response) {
int rc;


struct mqtt_wss_proxy proxy_conf = { .host = NULL, .port = 0, .username = NULL, .password = NULL, .type = MQTT_WSS_DIRECT };
aclk_set_proxy((char**)&proxy_conf.host, &proxy_conf.port, (char**)&proxy_conf.username, (char**)&proxy_conf.password, &proxy_conf.type);

if (proxy_conf.type == MQTT_WSS_PROXY_HTTP) {
request->proxy_host = (char*)proxy_conf.host; 
request->proxy_port = proxy_conf.port;
request->proxy_username = proxy_conf.username;
request->proxy_password = proxy_conf.password;
}

rc = https_request(request, response);
freez((char*)proxy_conf.host);
freez((char*)proxy_conf.username);
freez((char*)proxy_conf.password);
return rc;
}

struct auth_data {
char *client_id;
char *username;
char *passwd;
};

if (json_object_get_type(json_object_iter_peek_value(it)) != type) {                                               \
error("value of key \"%s\" should be %s", name, #type);                                                        \
goto exit;                                                                                                     \
}


static int parse_passwd_response(const char *json_str, struct auth_data *auth) {
int rc = 1;
json_object *json;
struct json_object_iterator it;
struct json_object_iterator itEnd;

json = json_tokener_parse(json_str);
if (!json) {
error("JSON-C failed to parse the payload of http response of /env endpoint");
return 1;
}

it = json_object_iter_begin(json);
itEnd = json_object_iter_end(json);

while (!json_object_iter_equal(&it, &itEnd)) {
if (!strcmp(json_object_iter_peek_name(&it), JSON_KEY_CLIENTID)) {
PARSE_ENV_JSON_CHK_TYPE(&it, json_type_string, JSON_KEY_CLIENTID)

auth->client_id = strdupz(json_object_get_string(json_object_iter_peek_value(&it)));
json_object_iter_next(&it);
continue;
}
if (!strcmp(json_object_iter_peek_name(&it), JSON_KEY_USER)) {
PARSE_ENV_JSON_CHK_TYPE(&it, json_type_string, JSON_KEY_USER)

auth->username = strdupz(json_object_get_string(json_object_iter_peek_value(&it)));
json_object_iter_next(&it);
continue;
}
if (!strcmp(json_object_iter_peek_name(&it), JSON_KEY_PASS)) {
PARSE_ENV_JSON_CHK_TYPE(&it, json_type_string, JSON_KEY_PASS)

auth->passwd = strdupz(json_object_get_string(json_object_iter_peek_value(&it)));
json_object_iter_next(&it);
continue;
}
if (!strcmp(json_object_iter_peek_name(&it), JSON_KEY_TOPICS)) {
PARSE_ENV_JSON_CHK_TYPE(&it, json_type_array, JSON_KEY_TOPICS)

if (aclk_generate_topic_cache(json_object_iter_peek_value(&it))) {
error("Failed to generate topic cache!");
goto exit;
}
json_object_iter_next(&it);
continue;
}
error("Unknown key \"%s\" in passwd response payload. Ignoring", json_object_iter_peek_name(&it));
json_object_iter_next(&it);
}

if (!auth->client_id) {
error(JSON_KEY_CLIENTID " is compulsory key in /password response");
goto exit;
}
if (!auth->passwd) {
error(JSON_KEY_PASS " is compulsory in /password response");
goto exit;
}
if (!auth->username) {
error(JSON_KEY_USER " is compulsory in /password response");
goto exit;
}

rc = 0;
exit:
json_object_put(json);
return rc;
}