Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("MSA_DeviceTicket", 
		"t=EwCwAlN5BAAUu1V9OkIAK55tj6h8OjaXgvkszYkAAaOsOsIMHv15enFa3DnwsgyWOCwo0zPhLP0F+IyM8/Kodldo6OksVaXD5Iv3jWqYeHyhDOONpabnIivbNd407VYfAyRgoC0vJmnrJD17v4U7Yt/g3FNMxx/EgZeKzTeAsX8WA4kZGf1aPo/9fJ1O9FsCZ8g+RPOe/y7Z1+93fmeMIb0n2e9At0n89ZWi+QnpiVhZTM+faC1JroeyNctl1vLuYS12yxOjlXO68wpIKUuuw69J7mZF8V/vHOgG350R3rODCO4bzAy0lMgzr1w68+yDLCR5W1Lly4lewoHqhot3+BDVHzSm0nMewzCHtCAKbGQj0t4POurrvQFzDgcU83wDZgAACF4ezoqqG2QYgAGJ9ilLAyL0Yu1jC/rb12lSpAGqpgge3SZt2RWg/KjeuuuZBxODUCyTUKvoYnxXWXO+"
		"coI1jTpGtJoMRoRNiiRuIbuCngLCV1nIP4UZzLPMSvY3rBaLxH+rl62NobEn334YKJ2eb1inVrkoUgHoApL2MNkp1ZL/BOPtX9HOFAjNpAo9NJkVD4d0fFk73cD8xrtLbstrcpIQmfcdBJSvMTieb7/8h+7xjEccnY/pUhS54dX6EOFDCZS9uXAo+DlEKxvUBAuyAtQnjb34+ISlBoQbPu9iw1+towzmk5jej11sCj+ILJBr1k8GupwyHGUaq0lB5UbnOFYAc9FhyAkbZANYRGs4wVmjL/ApkgL/a8EKCSZ1mGvKwmJtVvkUuj9V+nHz8QhiO9Xic/AzhiJJ97msgzRv+mrA+Ccb5umtOyhsQec1bXao196w0G+i2nWe7Qj5MbmzAaYmWlRDQ1kI0nSHQn8MQ4pMLevmMNgg0N7shrY9Y7krKdAsLGcF8Hx5eJS3AQ==&p=");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"EncType=application/xml", 
		"BodyBinary=k\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"2134\"/>\n      <arg nm=\"verqfe\" val=\"2134\"/>\n      <arg nm=\"csdbld\" val=\"2134\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1031\"/>\n      <arg nm=\"geoid\" "
		"val=\"94\"/>\n      <arg nm=\"sku\" val=\"48\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"16129\"/>\n      <arg nm=\"svolsz\" val=\"236\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.2134.amd64fre.ni_release.220506-1250\"/>\n      "
		"<arg nm=\"buildflightid\" val=\"8E409263-45B4-438D-AD01-6E9674AB032A.1\"/>\n      <arg nm=\"expid\" val=\"RS:11E0F\"/>\n      <arg nm=\"edition\" val=\"Professional\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"Dell Inc.\"/>\n      <arg nm=\"syspro\" val=\"Latitude 5420\"/>\n      <arg nm=\"bv\" val=\"1.30.0\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"8\"/>\n      <arg nm=\"proclsp\" val=\"1382\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz\"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"1\"/>\n      <arg nm=\"bssku\" val=\"0A20\"/>\n      <arg nm=\"chid\" val=\"{275d538f-f65f-53b8-922d-ad3630bb8b16}\"/>\n      <arg nm=\"sdksz\" val=\"238\"/>\n     </hw>\n     <ctrl>\n      <arg nm="
		"\"tm\" val=\"133377058362303820\"/>\n      <arg nm=\"mid\" val=\"31D67CCF-2A1B-42CE-9E08-921732504634\"/>\n      <arg nm=\"sample\" val=\"55522724\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app=\""
		"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"116.0.1938.62\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"116.0.1938.62\"/>\n     <arg nm=\"p5\" val=\"3084679\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"7b05736b-e32d-43d2-aa8a-cfc0704f62f5\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"cd244128-6bd3-4060-84ef-216303b075dd\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"-3227025047649376867\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"392\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     <arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;"
		"GmPNypWfI7Fjl4mpEG7TKqNwDyCv/sz0eaTkdKf6cfs=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"116.0.1938.62\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"116.0.1938.62\"/>\n     <arg nm=\"p5\" val=\"3084679\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" "
		"val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"000067e8-0001-004e-4e19-e757bad9d901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	web_url("127.0.0.1:8800", 
		"URL=http://127.0.0.1:8800/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("wakatours.css", 
		"URL=http://127.0.0.1:8800/general/wakatours.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("fonts-Roboto-Condensed.css", 
		"URL=http://127.0.0.1:8800/general/fonts-Roboto-Condensed.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("help.js", 
		"URL=http://127.0.0.1:8800/general/help.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	lr_think_time(15);

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&scpfull=0&scpguard=0&scpver=0&osver=10.0.22621&devicefamily=desktop&installdate=1614090215&clientversion=116.0.1938.62&experimentationmode=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("wakatours-header.jpg", 
		"URL=http://127.0.0.1:8800/general/wakatours-header.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("welcome.jpg", 
		"URL=http://127.0.0.1:8800/general/welcome.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_cookie("MC1=GUID=2b7b8684494f4f4a8376fa36ecdc93e8&HASH=2b7b&LV=202308&V=4&LU=1692777785241; DOMAIN=edge.microsoft.com");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_custom_request("aad", 
		"URL=https://edge.microsoft.com/identity/api/v3/aad", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"b9528075,303eb3e4,82a866e9,6c715cfb,e0075c8a,3f6a1a2,322c815,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,f95dbd76,6f36f9a6,48338cb7,cc2ca015\",\"enable_features\":\"37e13cbc,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,e4dcf6f8,b9d9753f,1c6dfaa8,aca302c6,14bd8de3,c43db0f2,2aebd6f5,c073554e,8c56fcfe,3b92f82f,3915a3ff,209911b6,49c628a9,3242f4fd,a7515176,4862aa13,7e84a6e5,8f5c2922,c10cfd2d,55df554a,6a798568,e606c331,e2f79107,c7bd11e5,e183e6b8,67a32b46,60e1b1a2,6159aa80,c428869,"
		"e54d9e38,49f8975c,b95b1c0a,8ea1baf,fe8f254,87e7bcb0,a47c71da,8656b6b2,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,bd8fc42a,61431c7,24b90b43,3412e8ec,1ac69f6f,41c26479,9cffea93,75b1b341,880d5ac0,60806046,8832ce78,567f409c,732c732a,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,1335445b,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,74a3abc1,56181917,6a07a97c,a49949fb,9e8c649c,7de23af1,2429a99,3a94d1fb,9c4f24cc,69a90326,6b9993b7,1cf10166,44f7971e,fbaa04bd,3e7788d0,58568926,4ed13a13,"
		"5727cfbf,f2c76ca4,ba735a9c,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,11890ef,b75a1d31,8b578039,9155bb95,d486bb42,b9ce036a,12b79225,bf158d94,9188ddb4,4d7ba7c7,10bc8c5b,49e6f3a8,87718941,25ea7cff,b42e6705,4d578363,f26b1d9f,f5cd97aa,767e1c9e,f7ea418,ace2c02,c000453b,5fe48b97,f8746649,ec121b81,7aef631d,62fd93b7,3cc92860,31315195,51ebd874,6e775e3,ac6af412,d29e7da8,6cac13ce,43d8ef41,1c83e97e,c2c703ac,8aacb961,994aac17,6451dfa2,ddcca13f,9b833520,"
		"23486c7c,c9bb2b1a,cf74f1c0,c0a8363a,9b6a053c,4a3b4096,21eb61f,5979e6c1,609df054,1e558647,8a094058,2c3ab10f,1347160e,a7846375,e79ca702,10163b0d,e8ee3c7e,328f993,50cbb1f,cd20ec4f,33a7e900,d7595bfb,11bc10fa,a052b118,b31e492c,3e1e1ad1,3061cce0,15a8d884,b9eb35ca,a2260a76,60428d40,61a208f0,a23374f3,f34a4bc1,f80345f,36812910,54a3cda4,c73eee2f,6781e032,2a62754,60c8e261,4bfc9256,4159a1a,9bfaa7d5,bd76bea7,be29afdd,66171647,92cfd720,32471783,e08e2341,c256496d,7d2dcff4\",\"enrollments\":[\"dec971ad\"]}", 
		LAST);

	web_add_header("X-AFS-CV", 
		"BWAa8pBpwhJ7RcdYj4rw57");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable; appInstallationId=-3227025047649376867; region=DE;");

	web_url("homeCloud", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/settings/homeCloud", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"kU/RXcHWI0trkGy9cTRJkS");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=116.0.1938.62&lang=de&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.5%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Edge-Asset-Group", 
		"EntityExtractionDomainsConfig");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=domains_config_gz&version=2.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_concurrent_start(NULL);

	web_url("experiments", 
		"URL=https://api.edgeoffer.microsoft.com/edgeoffer/pb/experiments?appId=edge-extensions&country=DE", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_header("Origin", 
		"http://127.0.0.1:8800");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Roboto-Condensed-regular.woff2", 
		"URL=http://127.0.0.1:8800/general/fonts/Roboto-Condensed-regular/Roboto-Condensed-regular.woff2", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://127.0.0.1:8800/general/fonts-Roboto-Condensed.css", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("Device-Name", 
		"Edge");

	web_add_header("SDK-Version", 
		"1");

	web_add_header("x-Cid", 
		"c1644d22-2ca9-4ee3-bb33-88855776778c");

	web_url("policies", 
		"URL=https://clients.config.office.net/user/v1.0/edge/windows/policies/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_header("Origin", 
		"http://127.0.0.1:8800");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_concurrent_start(NULL);

	web_url("Roboto-Condensed-italic.woff2", 
		"URL=http://127.0.0.1:8800/general/fonts/Roboto-Condensed-italic/Roboto-Condensed-italic.woff2", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://127.0.0.1:8800/general/fonts-Roboto-Condensed.css", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_header("Origin", 
		"http://127.0.0.1:8800");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Roboto-Condensed-700.woff2", 
		"URL=http://127.0.0.1:8800/general/fonts/Roboto-Condensed-700/Roboto-Condensed-700.woff2", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://127.0.0.1:8800/general/fonts-Roboto-Condensed.css", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("wakatours.ico", 
		"URL=http://127.0.0.1:8800/general/wakatours.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t19.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable");

	web_add_header("X-AFS-CV", 
		"SNm7XNKnuItE7FrL.5.1");

	web_custom_request("subscriptions", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelExpireTime\":\"Wed, 18 Jun 2025 19:34:03 GMT\",\"channelurl\":\"https://wns2-am3p.notify.windows.com/w/?token=BQYAAAA7Sz9ARdAbauwYBeAyGmoaaAwQXdYjKm9CMrNGsLSnrzkprPdE6BnpueguGN23IhE9CKs%2f9xPYRNlU3qjfAT96mk6jjYbiOtAsNnA4ZvMRu9sXDVLaIzFN4hEHx4yAOa6t3iPjQajdmLgSc1KcKTcDQVJ%2fSkaVsp7fZq%2f%2bIRZRuBEMsj8jrZUm%2fBYoXJ1h4n4ue42jSWj9SzYbS64unRwsDMihHoWzzkA3RVNDQHxkVlhIqORXu6dHB02ncjWZy10%3d\",\"deviceId\":\"chr:ujqqGihqT7Go6gcshwEwqQ==\",\"publisherFilters\":[{\"activityTypes\":[64,65,66,"
		"67,70,71,72,75,77,79,82,103,104,106,108,109,113],\"application\":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		LAST);

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable; appInstallationId=-3227025047649376867; region=DE;");

	web_add_header("X-AFS-CV", 
		"T0Z2itY8bdBB+p03/dFLUE");

	web_add_header("X-Client-Data", 
		"COiNywE=");

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=ujqqGihqT7Go6gcshwEwqQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x10c\\x18\\x02*3\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xFC\\xDE$2\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x07\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR$\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xC6\\xA6\\x02\n\\x04\\x18\\xC6\\xA6\\x02\n\\x04\\x18\\x9A\\xB7\t\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b "
		"00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:ujqqGihqT7Go6gcshwEwqQ==", 
		LAST);

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable");

	web_add_header("X-AFS-CV", 
		"SNm7XNKnuItE7FrL.5.1");

	web_custom_request("subscriptions_2", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelExpireTime\":\"Wed, 18 Jun 2025 19:34:03 GMT\",\"channelurl\":\"https://wns2-am3p.notify.windows.com/w/?token=BQYAAAA7Sz9ARdAbauwYBeAyGmoaaAwQXdYjKm9CMrNGsLSnrzkprPdE6BnpueguGN23IhE9CKs%2f9xPYRNlU3qjfAT96mk6jjYbiOtAsNnA4ZvMRu9sXDVLaIzFN4hEHx4yAOa6t3iPjQajdmLgSc1KcKTcDQVJ%2fSkaVsp7fZq%2f%2bIRZRuBEMsj8jrZUm%2fBYoXJ1h4n4ue42jSWj9SzYbS64unRwsDMihHoWzzkA3RVNDQHxkVlhIqORXu6dHB02ncjWZy10%3d\",\"deviceId\":\"chr:ujqqGihqT7Go6gcshwEwqQ==\",\"publisherFilters\":[{\"activityTypes\":[64,65,66,"
		"67,70,71,72,75,77,79,82,103,104,106,108,109,113],\"application\":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		LAST);

	web_add_header("X-AFS-CV", 
		"BM5nZC4LS2fJ7cUPbQMuAb");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable; appInstallationId=-3227025047649376867; region=DE;");

	web_add_header("X-Client-Data", 
		"COiNywE=");

	web_custom_request("command_2", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=ujqqGihqT7Go6gcshwEwqQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x10c\\x18\\x02*\\xD3\\x04\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\x12\\xA1j!\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002 \\x08\\xC6\\xA6\\x02\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x02(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9E\\x95+\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002 \\x08\\x9A\\xB7\t\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08\\xDFW}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08\\x90R\\xD2,\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\xDFW}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR\\xDC\\x06\n+\\x12)"
		"8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\\x92\\x03\\x18T0Z2itY8bdBB+p03/dFLUE.1\n!*\\x1F\\x08\\x88\\x81\\x02h\\x00x\\xE5\\xD8\\xA3\\x0C\\x90\\x01\\xC6\\xA6\\x02\\x90\\x01\\x9A\\xB7\t\\x90\\x01\\xFC\\xDE$\\x90\\x01\\xD0\\xAF:\n\\x10*\\x0E\\x08\\xC6\\xA6\\x02h\\x00x\\xFB\n\\x90\\x01\\x81\\xF5\\x02\n\\x12*\\x10\\x08\\xB1\\xE6\\x02h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\n\\x17*\\x15\\x08\\xCF\\xF3\\x03h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02"
		"\n\\x1C*\\x1A\\x08\\xF1\\xF7\\x01h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\n!*\\x1F\\x08\\x9E\\x95+h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\n&*$\\x08\\xCD\\xBE\\x02h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\n+*)"
		"\\x08\\xF7\\xF7\\x02h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\n0*.\\x08\\xC7\\x87\\x03h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\n"
		"5*3\\x08\\x9F\\xEF\\x05h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\n:*8\\x08\\xEB\\x95\th\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+"
		"\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\n\\x15*\\x13\\x08\\x9A\\xB7\th\\x00x\\xFB\n\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\n?*=\\x08\\xEE\\xF7!h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\n"
		"\\x1D*\\x1B\\x08\\xFC\\xDE$h\\xE8\\xCD\\xA3\\x0Cx\\xFB\n\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\nD*B\\x08\\xC9\\x8B)h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\n"
		"I*G\\x08\\xA1\\xDD'h\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\n\\x1F*\\x1D\\x08\\xD0\\xAF:h\\x00x\\xFB\n\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\\x98\\x01\\xFC\\xDE$\n"
		"N*L\\x08\\xB5\\xDADh\\x00x\\x8C\\xDC\\xA3\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\\x98\\x01\\xA1\\xDD'\n\\x0B*\t\\x08\\x81\\xF5\\x02h\\x00x\\xF3\\x07\n\\x04\\x18\\xEE\\xF7!\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b "
		"00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:ujqqGihqT7Go6gcshwEwqQ==", 
		LAST);

	web_add_cookie("BCP=AD=0&AL=0&SM=0; DOMAIN=business.bing.com");

	web_add_cookie("MUID=2DBACDC8BA596BB7196CDCA6BB7C6AD6; DOMAIN=business.bing.com");

	web_add_cookie("USRLOC=HS=1; DOMAIN=business.bing.com");

	web_add_cookie("SRCHD=AF=M403IP; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=75D9DFB70B444A4C9C109EB8BD4857E9&dmnchg=1; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUSR=DOB=20230619; DOMAIN=business.bing.com");

	web_add_cookie("MUIDB=2DBACDC8BA596BB7196CDCA6BB7C6AD6; DOMAIN=business.bing.com");

	web_add_cookie("BFB=AhBXIAASCXeKqtBUziYE7svs3rdKCnDfySq1Nbo33hHh0ErmOFGYtbNEJR0YffGsZHdQG-7-ROxf9TDIuyptzsHErowlQ---_HPh0EIL7aHce97BHOIsgaeFKEEZcUF9VfUtECq08fCcDmbY8m3LTXS2ubk5_3-JWH1YQ2J8UW2-_A; DOMAIN=business.bing.com");

	web_add_cookie("OID=AhBcnjf9A3XUDs0IwANy_rQj44vnJgtxCgO70wzjQXqU94CVdVE8kfY5vm6UJsvZ0eWQByqiSnigubVXnlifFi0R92iV13xO8WSEcIZ_9xF8fGGQDmKran3LjwngY_gKq56I7IExdiHOZkHjw34sdAvS; DOMAIN=business.bing.com");

	web_add_cookie("OIDR="
		"ghCzs2IsAAkh9szd0Y13nKPDQuKWY0-N-aJrBSXN0PxUeiXG8n9ygb5Eq6v8gRDyNFz8tJNgHoyyuC93I-o4Vux9AybOASSgApgQB4C7Xl7r2-BD0ARsV6EVYrktAg4AOJOAHQij0kkYpkO1T8AyYVEei7wCWB45yx1gTtrnPIHyXZJsj4AxzegOjGBhOqhxRP6Xa0EEPTXhlhoZCObL2F0YR7FoFzAY2IpgW9QS8smNuJ978MLCN4nO_dqvgUvJ7YZsQIm_D9uTF5Uop9i9RHpN0HF_UiQGKpQ8aLgHGo6QWpLlSI-dtGQJkb_N-1-rN0hAHbpxJlxM8NVIIy5m9zEYewRjtkWORv9DrzH_f8mlGyammVRJOWY9eHjzv8eYLVZ3-EHuIYl-VU_Eu8Ux99hRwL1czkIhAsxuBODRXJI6Nt6hzRHgXIdh_UVAdXHvnphd6IPLpKTVWG_zE87S_HSVCPGcZh3F0q0WeMzlnnm5AGv3hZa-AI"
		"CCgxH3IdvWj87v3Gqg1tY8CD1FqqXtMNbeOWSZ1TL99YflGzWtRASKY7p1_g0inqj49jj7_g6u4ItfzDe-KpY_i6bY5YZd4Z61yfgVzI63vvQZL1tLKfgYn_zkd-iHgll2O4YjBz1YJBAMEDjWXbTcylpUEi0LaxHChXUiCfvWuVhUCQDZKP7bzLliSw4jAv91vMsyrx-jAVZ8hBdffV-7sgFgXLFFPK0Uv0OslpeZfz0sYS_kVmnbrmM9NU_b1JlXyCm9FA4MlhASc1VZ7VVJnG_xBHRO059PC4dIl4gSibkLV5BzeRNixKwJQ5cHYtfcky8acrwdvjrkFsyGfIkR77PQpqg548mcaaPB0PmTziazU43ImpjGCunyzeisXttgTv6OfRJSrlj2p-f2PcGQzVZRH3iDS9JUvXbp6ndOKLpdeaceKC1W4esXu2zUi2c-SG2qeMVl0bcUw10TocfkbUuLCsC2VVyB25inhb4XrfmnucGLm5m3"
		"b9fydtZGDEOI4eoPdwrxsGWtVdglodOvjPUnEB64UE5OpRCX5cnmM2TK6BGhps3ffxU0ceUAO_gx9RtOcGPYj9kDHK1h2V1wMn-zV5CZhka6Wlr4etlfJVcRo88xHMK-c158Ha8IzSwm-kRMzhVcPlwpCC4HOGo-KLeTM7Dqugcw; DOMAIN=business.bing.com");

	web_add_cookie("ACL=AhAO7yuMn8vr8zWuyzlZlDWasddICNi2PCF0rLWu4hDm9WqiuCLLBjZ7gMpOEPcqNIYSRL2kxu4LA4jfUagFABMj; DOMAIN=business.bing.com");

	web_add_cookie("_RwBf=mtu=0&g=0&cid=&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2023-07-31T23:36:45.3462972+00:00&e=&rwred=0&ilt=19&ihpd=0&ispd=0&v=2&l=2023-07-31T07:00:00.0000000Z&lrat=0001-01-01T00:00:00.0000000&lft=0001-01-01T00:00:00.0000000&aof=0&rc=53&rb=0&gb=0&rg=200&pc=50&rbb=0&clo=0&wls=&lka=0&lkt=1&TH=&dci=0; DOMAIN=business.bing.com");

	web_add_cookie("ACLUSR=T=1690846605000; DOMAIN=business.bing.com");

	web_add_cookie("SRCHHPGUSR=BRW=XW&BRH=M&CW=1492&CH=871&SCW=1477&SCH=4598&DPR=1.0&UTC=120&DM=0&SRCHLANG=de&PV=15.0.0&EXLTT=4&HV=1690846609&PRVCW=1492&PRVCH=871; DOMAIN=business.bing.com");

	web_add_cookie("OIDI="
		"ghDUoAnPwkeL6U2ObwHOz6CcPyjMLR209M8wn6UHizokc8ZaCRZNe10NMwNMr65g8Nng4qkBi6O2uwJeoBrPEDysiR7Sx6XjRz7_Uq1Grd0O_reIgFoxIfB8EoA0bznJd0bwcJduWaW6L21darWYVCmfN0E1oPzM0PHN2kvJt9BLGzeL6A20bXOqh2h5JJKGxN9vxO7p-iQJ-QYxer_91D0b61o9zg1E5G_hhJa-cq8Ys178j9ZWAoZ0uRJnbpmuxvgv_zxwLhNtw-VnW92fZCe_xO680tClq4dOAjZFol8MmjASd8_I0b1_MB60U0BQS8WKB81AY0875PeysjVZpHJXOXx7F_THtN04COzBV1tqP7F8KcKhdF-fbEqhDkiBg9UKtQ1gcmD4TWQqZ_qzW_k2CL4_rj7bX3EU1OnhVrcIfboA1F9hLBzYIv856En42Sv4yEf7_F_uWwfrGygZfE33trH3HJqJV_4BzOXu7it_-A1QxwHmZ2"
		"yZN9UnHvTpwOSmL2ckCHq2G0JAWZ82vC33StSuLrt0gG7ytC4mXkS8EYcIhTMRBZe545JiD7nLGdmUXjErxF3S63U1qnOh2oQm_xShn_aJ5PbURFz07Gz9urPV-f1q2CFo7PaGSvGnoGRNQOUjNXntZIRUjO7KtTB3YGxbnRA1on8yuH9USupagiibgt0EUun7ZZvDHN6u1FLa1XfzoP89HecfaS--EKxADDIwZukWbcV2VkzO1GMftRAENJlidGJfuCDrpbjWvXG2ySzY01a3lY7J7ur5k3mSaEPZO1Es4oI0lOQVSg1pUJd7RtcCGfWNcol7j-QxNbEj4SdM4GM0agTzbNejkCu0ppRZgxy9m9UZjl2CK7fIJrYUcQjXOeKzbeaXxprNgBLkw9h1vHTWaKc5UFFsK2pzpFfG5PfdBPtJcDfLKyffjGVtKXRR8HDOZetqCK1Cvr_jiujXeWayX2J1y95cjmY_9PYRT2WmCBwMBpJeTn4C"
		"cjeXBhPzJHnsSVIIKzMgJZNZ6ab3lHAZa-w97HGVMjDY7N9NFZ_bx-Vg_x1Vo8oAAn-4dy7s1Ga_I1jdU35BIdmSrvTLWa7tx5IKAJNaEfusJqW7EUQ6WiKwW23wq8zE_kDtt9RfCyJ3QBnfrvbrzEXEolKaqIWn9y-OzbnoV7RfRSZDAUGq5nWr0htIGWndynIUg3Z4b1Cqw7pg_cxlvwSSjPOUAr33YsnK20COtFmBVkW2Y2jgfupvjg1jT4y0WN5VMXnhn0Pm4vXDvRMKZJiuNJ8uV8SYa402iJAknzRqcsHT0YNS14qJG6DlCL_9wvTgzOqHY3sMZDSJw1DamveS4iHpfk0WiAZNP0J3yOyoU3oEYnKva1n9k4kOoAX7qWEYOZEs9szhHXnd8Ho0OxGFMqcZ4kIWqpldLFADEVdxKS6VNlxhUOsTXB2BVGHvGIbr7In-ZBx3p_9njwEC7VjRX2VeX7R6FfOBfUkFGqxdhUUMLHEk84"
		"FWQf0IeT457VIUVEMH9_XlpcbR-lYP2CVZP6mdYGeBNl5U0Ke--LNYr9Kk75gzLbihFikSrYim6njSHrFn4dEp9Yz8lPtgV12pNNgkFRYakpEPorfY_0gBuUe21S_5Mb28YQqlT9kKWKD-42nNzwIGDMS1a3GnCUW74CQu8dEbi1V8g2n_dGLfTEaKZpNM2vE3bKgWkcUfn8M_mrpuY-opxxbDa-0qJG_cOxySZZS9Uvnqw5S9wDtfooxotKC0HNTp6CpfsJ4hQJKjX5dEeQSMkarcgSRKOPLFfEptDU372UK2QvZSNrxbg9h6pYrVAlIy6WbWR48NWebzmp0RS7AMX80VMtVbk6IBlJS0YnE3kOazfm1UACZgcY9W4_PFS8M0R6Yhffz166ZvHJvasqUhy_t7qfq6ueYwagRm1cl95_I7ztQRKFJAvx7GetwEr_ECF5HadWyiHOUtQjcTorLvilZqp_1yPNZSGc9X4cKWUS9jdY-mchTB"
		"2rTmadOsuiOupTw5QYkWhJNWEXYJxea0xZTmxPkqRongm1ZdNX4GgbSG4FjpMUsruqowXPLB8RE7jA9QqFliyZy0Y5JE2wzpSvFyXLoyV30dA7lnDaw7hDoEwjdgd8HmKfdaxFJ12MLMclAKC6VTmhZHHgI5hA1TwBJyIzi53cHdiGPqAl0YUSxCYwx0kn_q8QYmFmyft602mPi3iIg7FDf4dN_rZO7cqlRrB3BkPmaG8iMTQxLj0LkXebiOqkQCT6EODJlcFGVIpfCHebLCVmAqKlafjvDnE4GjzwjmAMX66biJEHn1-BjeTMPclZHmV-ki7CP8iuFxZGE-cqZKdzGyH3Bg_Zcl-s6KMKfaa40hdEQmGMeGe69aZpS3obrgKBHjICvTSjPDINZOTeKz3LB6zEgitYwSezZlKOJ_zUuKdlH4JcIZXrpK_ruvzP0hHM5Ex39bjkso-8Q23Nt5lwEC8wLKgK_C17rT1Ew2s32GuzzsXG7bt-"
		"j73fXP6qaY-NYPsB8r2TD8O5zMzB5Pj6DqaLDcVAjzqK9-StZ5__h7pIROzu6s1lMcP6TFjzH_U0ed7waf4RBdIiPzSzzlASLZYkW9KCAjyAomM_2e23NSiCEYf0EmH-cVN8yK6pDfV56SEs0kyTTZofw63G44AT0GSd9xGt0osFXa1zsPso9Yl8JhS0Y65V5ulAqqO9P1_JQldq_lYHTVRtom6ZhI_FF1i5LEsqliYT_4mw1pySpzfym5GIsS-9pLkSKI8qybNc0VFDaJvybmafFaKuohv35liJIEGTSOe2OqO4kcYrYO0nW14a0NdJqHgCqTniiGW6dklynZph1goj22d01ggD9ecdz0SiLukTD0-DbLCg55KtCi-oO0haLzO34ka9daLly4fkgkMoY5JhXXIXCUR1wY_iHymSGMUEtsI0SE7TcXaGqmMCo6HuzPlUOco76u-Yx5e6GAX5iJXrsALT2VQZ4oS-ltQmDqXARfe8AD8sC5"
		"aMtw3sDbwijqPDwTlXE2ex4jGdI20_MdsrZiIgEw4mCU6aSjEnmehiLe_aGsZnst58cwR9wO9b1Okn6-FfC-mLZuQA2IJN3Bod35ba6h_VaZpFNMYLfq89JjcwZuwpc5uQtr2hF_8sFRvi5ljwYtCts2b7zCuXlKAAsGIYhOA7t4ncUrhGeYC65du6pIbVywPmNmpjyWl2ikfLPWnx7ynpeMp0m6GMUk57r8v4IapyECV2A3O8hGZo1RpdfsB2DMBt-mfhwGdgw_dHdUpBw5aA4JVPpUHiWn5vMftVXD-w; DOMAIN=business.bing.com");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("signin", 
		"URL=https://business.bing.com/api/v3/user/proactive/signin", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-AFS-CV", 
		"Xj6t7JUcyyeA4EvsSAuSeW");

	web_add_auto_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22621; app=Microsoft Edge; appVer=116.0.1938.62; appChannel=stable; appInstallationId=-3227025047649376867; region=DE;");

	web_add_auto_header("X-Client-Data", 
		"COiNywE=");

	web_custom_request("command_3", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=ujqqGihqT7Go6gcshwEwqQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x10c\\x18\\x01\"\\xA2\\x06\n\\xAE\\x03\n$f4972e70-e514-49e5-bc6c-9c1d3f17681a \\xD3\\xCB\\xD7\\xE3\\xA21(\\x83\\xC1\\xB4\\xE1\\xA310\\xBA\\x98\\xA0\\xB7\\xE7/:\\x0FDESKTOP-OBMIF1P\\x90\\x01\\x00\\xAA\\x01\\xBC\\x02\\xD2\\xB9K\\xB7\\x02\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x12\\x0FDESKTOP-OBMIF1P\\x18\\x01\"SChrome WIN 116.0.1938.62 (493f2197e519d4dde5309fdf4abf4f719089372d) channel(stable)*\r116.0.1938.62"
		":$ff5c5dce-8d57-42fa-9daa-a27daee6a878@\\x83\\xC1\\xB4\\xE1\\xA31J\\x02\\x08\\x01Z\rLatitude 5420b\tDell Inc.h\\xA0\\x0BrD\\x10\\x88\\x81\\x02\\x10\\xC6\\xA6\\x02\\x10\\xB1\\xE6\\x02\\x10\\xCF\\xF3\\x03\\x10\\xF1\\xF7\\x01\\x10\\x9E\\x95+\\x10\\xCD\\xBE\\x02\\x10\\xF7\\xF7\\x02\\x10\\x9F\\xEF\\x05\\x10\\xEB\\x95\t\\x10\\x9A\\xB7\t\\x10\\xFC\\xDE$\\x10\\xC9\\x8B)\\x10\\xA1\\xDD'\\x10\\xD0\\xAF:\\x10\\xB5\\xDAD\\x10\\x81\\xF5\\x02\\x8A\\x01\\x0F\n\r"
		"116.0.1938.62\\xBA\\x01\\x1CHDDoVaajL7QXKApvnD949Cj2NS4=\\x12\\x18ujqqGihqT7Go6gcshwEwqQ==\"R\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\xB5\\xDAD\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02\\\\5%=jUBeuu[lRry}d,"
		"t2R$X4Ic}fwFB5].^,mKr#v6oUyYx_!8a1Gl`Q<%^Jmjw}u2pdmF6tR}SF<$.Oj38si{*-%cWJ\\\\In9X1rGli|[jzZ\\\\JE123zM@bzgfegg/H4~,/*a7??ai~;<=HSCu/^#w,!b_^M289,r9[Yx>+#Vqozx4E/AIlBJ,[f-`-SqNlfeUAMTR|<M:VKK$m[_g6'zt={OU~e+u?'W@HnG7Xb0&<OUMu1$CewU*=c2P&ep@2VWM:\\x1FProductionEnvironmentDefinitionR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:ujqqGihqT7Go6gcshwEwqQ==", 
		LAST);

	web_add_header("X-AFS-CV", 
		"6R5WGUR22Rv+2g0mn3MYH/");

	web_custom_request("command_4", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=ujqqGihqT7Go6gcshwEwqQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x10c\\x18\\x01\"\\xCC\\x06\n\\x90\\x03\n$b1b35e94-6111-4acd-8829-91bb65a47fb2 \\xD0\\xCD\\xD7\\xE3\\xA21(\\x98\\xE4\\xB4\\xE1\\xA310\\xB9\\xC3\\x99\\xA9\\x8D1:\tencrypted\\x90\\x01\\x00\\xAA\\x01\\xA4\\x02\n\\x9D\\x02\nXCO33IatxPU4klBfEJrjDNfL9pa6igc+yoJjO/PS167FksZPWWS90p55yLejRwqaFtDVEiUxSm0UtOI/UMVlovQ==\\x12\\xC0\\x01DAr+"
		"dmpxAmWTu5Di00DUkw8oNI58RpRhexaepsXYx32FvYfqAc4WBvBOOkZOhG6eUhF9Z2P0kAr76u1jBSjrr4JBlB7TfTTHsQH8Qq16cNjAprZ8U9Sv9cih4itj5PEe4jfKjywp0RerJlsrSc71FgjjGjXU8sLkVdZb87MxOuxthrVD6h9akAstEW/PeMAL\\xB2\\xB4\\x12\\x00\\xBA\\x01\\x1CKx0h0OM/f/g5lWtAv8REcQOg8C8=\nF\\xAA\\x01C\\xF2\\xBE\\x8F\\x02>\"\\x02de2+CbZVENsT2hWyW14Jg-K4VIRkFowIKMN2tMqtMs66rJs:\\x02\\x18\\x02`\\x92\\x8F\\xCC\\xA1\\xAA\\xD2\\xD8\\x17\\x12\\x18ujqqGihqT7Go6gcshwEwqQ==\""
		"R\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\xB5\\xDAD\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02zbxLI~b>OzFb>)IS#;'ohBU$%i&CTO!,iQvA!2!6crgpe{n/abi}omH4Yj+&6g!l}Q0FJtrLZ{TYdO~5:!>& MEen@o&ZwTo2Rx6fiC#EWFV0_y@0j~\")"
		"bP+X~n=e6hk1g8iVxM}Q8/SY1OJnW_l4LB7)EiJAmag`YZ=q@b6*:&P3A&,iVz-(@q,j<(r]RJk!LCX@XHatPd$-x'?u1bH=6*~w7p~:GMVE/w+7{)S2q}~U7gVC\"Fv7,lLxutWIXPq:\\x1FProductionEnvironmentDefinitionR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:ujqqGihqT7Go6gcshwEwqQ==", 
		LAST);

	web_add_header("X-AFS-CV", 
		"4MtBAep71aQF5vb7w/YkFa");

	web_custom_request("command_5", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=ujqqGihqT7Go6gcshwEwqQ%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18ujqqGihqT7Go6gcshwEwqQ==\\x10c\\x18\\x02*\\xCD\\x04\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x02(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08<Y}"
		"<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9E\\x95+\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08<Y}"
		"<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08<Y}"
		"<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08<Y}<\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x04\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionRi\na\\x12_8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x01`\\x0C\\x92\\x03\\x18BM5nZC4LS2fJ7cUPbQMuAb.1\\x92\\x03\\x18Xj6t7JUcyyeA4EvsSAuSeW.1\\x92\\x03\\x186R5WGUR22Rv+2g0mn3MYH/"
		".1\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:ujqqGihqT7Go6gcshwEwqQ==", 
		LAST);

	web_revert_auto_header("X-AFS-ClientInfo");

	web_revert_auto_header("X-Client-Data");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.62\",\"identity\":{\"user\":{\"locale\":\"de-DE\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEDjKR4UjJxGp/IhhmnDnfZrgAOmziIQUYVDLM6roJUTGPohzUtVdiXi3eyVR7pG8s5ijLBfJFw9Uz7mP98Tfqu9MHrjg1xPm6WP5hwgkcaP4SUjJpL98i+S1MfWrmjT80RUCSJcCut742GGT7375+6ET4BAV1wt1Jsx1gA2wydRPwn+"
		"sjk9tG2pqUm9KeEPbmArf9n/qeyhSSsSKSagnQpCGeGJdzMfiT11gfn/9hR6sf4OGXaADAIOBhVynnwpW89iNVj6z9FYqoAXLlxfO1Ei7i8TGJRANPwRmD+uHNRCw1GIuJAxCsTyvUFJq9KIfdp3lHgE=&p=\",\"family\":3,\"locale\":\"de-DE\",\"osVersion\":\"10.0.22621.2134.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"de-DE\",\"name\":\"\",\"version\":\"116.0.1938.62 (Official build) \"},\"client\":{\"version\""
		":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638288219029322708\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:8800/cgi-bin/login.pl?\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:8800/\",\"ip\":\"127.0.0.1\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"c28f6f04-1390-4fe5-be05-93f033a47531\",\"synchronous\":false}", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.pl", 
		"URL=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("up.png", 
		"URL=http://127.0.0.1:8800/general/up.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("down.png", 
		"URL=http://127.0.0.1:8800/general/down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Snapshot=t31.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(5);

	web_custom_request("3_2", 
		"URL=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/bloomfilter/x/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"identity\":{\"user\":{\"locale\":\"de-DE\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEDjKR4UjJxGp/IhhmnDnfZrgAOmziIQUYVDLM6roJUTGPohzUtVdiXi3eyVR7pG8s5ijLBfJFw9Uz7mP98Tfqu9MHrjg1xPm6WP5hwgkcaP4SUjJpL98i+S1MfWrmjT80RUCSJcCut742GGT7375+6ET4BAV1wt1Jsx1gA2wydRPwn+sjk9tG2pqUm9KeEPbmArf9n/qeyhSSsSKSagnQpCGeGJdzMfiT11gfn/9hR6sf4OGXaADAIOBhVynnwpW89iNVj6z9FYqoAXLlxfO1Ei7i8TGJRANPwRmD+uHNRCw1GIuJAxCsTyvUFJq9KIfdp3lHgE=&p=\",\""
		"family\":3,\"locale\":\"de-DE\",\"osVersion\":\"10.0.22621.2134.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"de-DE\",\"name\":\"\",\"version\":\"116.0.1938.62 (Official build) \"},\"client\":{\"version\":281483717771270,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638288219029322708\",\"customSettings\":\""
		"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"correlationId\":\"C28F6F04-1390-4FE5-BE05-93F033A47531\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("login.pl_2", 
		"URL=http://127.0.0.1:8800/cgi-bin/login.pl?USER=testuser&PASSWORD=testuser&ACTION=Login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("ChRDaHJvbWUvMTE2LjAuMTkzOC42MhIXCccw19BxO9pTEgUN6ohXnhIFDVievOs=", 
		"URL=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE2LjAuMTkzOC42MhIXCccw19BxO9pTEgUN6ohXnhIFDVievOs=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t34.inf", 
		LAST);

	web_submit_data("booking.pl", 
		"Action=http://127.0.0.1:8800/cgi-bin/booking.pl", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?USER=testuser&PASSWORD=testuser&ACTION=Login", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=SESSIONID", "Value=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", ENDITEM, 
		LAST);

	lr_think_time(15);

	web_submit_data("booking.pl_2", 
		"Action=http://127.0.0.1:8800/cgi-bin/booking.pl", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=DEPARTCITYID", "Value=CGN", ENDITEM, 
		"Name=DEPARTDATE", "Value=29/08/2022", ENDITEM, 
		"Name=ARRIVECITYID", "Value=HAM", ENDITEM, 
		"Name=RETURNDATE", "Value=", ENDITEM, 
		"Name=PASSENGERS", "Value=1", ENDITEM, 
		"Name=PREFERENCEID", "Value=NONE", ENDITEM, 
		"Name=CLASSID", "Value=COACH", ENDITEM, 
		"Name=ACTION1", "Value=Next", ENDITEM, 
		"Name=SESSIONID", "Value=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,fppmbhmldokgmleojlplaaodlkibgikh,ohckeflnhegojcjlcpbfpciadgikcohk,ojblfafjmiikbkepnnolpgbbhejhlcim,jbfaflocpnkhbgcijpkiafdpbjkedane,ndikpojcjlepofdkaaldkinkjbeeebkl,alpjnmnfbgfkmmpcfpejmmoebdndedno,ahmaebgpfccdhgidjaidaoojjcijckba,ebkkldgijmkljgglkajkjgedfnigiakk,mkcgfaeepibomfapiapjaceihcojnphg,lkkdlcloifjinapabfonaibjijloebfb,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,"
		"omnckhpgfmaoelhddliebabpgblmmnjp,jcmcegpcehdchljeldgmmfbgcpnmgedo,cllppcmmlnkggcmljjfigkcigaajjmid,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,mpicjakjneaggahlnmbojhjpnileolnb,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"8687");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-116.0.1938.62");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:wCd2YzQaq7KflLz5FnduKr-lm91yidGcOnzJZB3jyW0&cup2hreq=5f2e0d9bd7fbd767e7f946f017ab8de858f36b9ebb4c38ece3ce3e1fb4c6179b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.76,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser"
		"\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.6,\"AppVersion\":\""
		"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.93\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.93\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.93,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.90\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.90\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.9,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.53,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"lang\":\"de\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"116\",\""
		"AppRollout\":0.6,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.32\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.C1092FCD222EDFB14D8425498DFDBDA91571C17E48E0C1ABE169731BBF8094E7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.32"
		"\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.32,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.8AA3F8BEEA3F8DFB32ECD478C874CA438D2EB07F78DECF5B0A7121C3557C45ED\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.37\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.37,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"10.34.0.49\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.02\",\"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.02\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.02,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.03\",\"enabled\":true,\"lang\":\"de\",\""
		"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.03\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.03,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.89\",\""
		"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.89,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\""
		"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.05\",\"enabled\":true,\"lang\":\"de\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.05\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.05,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.96\",\""
		"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.BFAFEE1876855DB19483311B3C81E160C5DAFAD1A45DE7126092E9FD703FE4F5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.96,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.2.31\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\""
		"GGLS\",\"cohort\":\"rrf@0.87\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.2BC302F76A4E272A833D6BF17EFDF9CFC48E12EF025ABABFCF2DF2D4F6459747\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.87\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.87,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2983\"},{\"appid\":\""
		"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.09\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.D7AF289F759484E2061D5DC3D9A7A9E426A04C005A96E9B822090D095BC31E1E\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.09\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.09,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\""
		"version\":\"2.0.5750.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.46\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.46\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.46,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.55\",\"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.8C44D387A3E4B451564118A0C4B15B3F23D9A7B8F9292A875846BE87B85B702F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.55\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.55,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.20230828.1.0\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.52\",\"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.E354CB3AEE2C30C31A14808649B9EE968861AA755F7B3C0B0C78EEA5ABCCCB22\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.52\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.52,\"AppVersion\""
		":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"115.16138.16099.4\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.23\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.23\",\"AppMajorVersion\":\""
		"116\",\"AppRollout\":0.23,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.28\",\"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{"
		"\"AppCohort\":\"rrf@0.28\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.28,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.62\",\"enabled\":true,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\"1.0DB50494B994B55F9F816257EC371B55BA4E52689C03231B141B8D3FF1D394C3\"}]},\"ping\":{\"r\""
		":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.62,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.0.4\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"de\",\"packages\":{\"package\":[{\"fp\":\""
		"1.D1841099A7991456D26FF9911CEF149249E88EF9A25993329C88FDCF7CF45B4C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"116\",\"AppRollout\":0.97,\"AppVersion\":\"116.0.1938.62\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2023.8.9.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\""
		"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.2134\"},\"prodversion\":\"116.0.1938.62\",\"protocol\":\"3.1\",\"requestid\":\"{ae58d471-2b03-4b8b-a065-1309829787ce}\",\"sessionid\":\"{70e1a7ac-0eeb-43a2-96ed-507b414b93ed}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\""
		"1.3.177.11\"},\"updaterversion\":\"116.0.1938.62\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(5);

	web_url("booking.pl_3", 
		"URL=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTFLIGHTID=BWA0001&ACTION2=Next&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTCITYID=CGN&DEPARTDATE=29%2F08%2F2022&ARRIVECITYID=HAM&RETURNDATE=&PASSENGERS=1&PREFERENCEID=NONE&CLASSID=COACH&ACTION1=Next&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"116.0.1938.62");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"8687");

	lr_think_time(6);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.55\",\"enabled\":true,\"event\":[{\"download_time_ms\":12067,\"downloaded\":106933,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"309.45740.1.0\",\"previousversion\":\"1.20230828.1.0\",\"total\":106933,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files"
		"/f028d632-418d-421c-919c-bd3d93261a1f?P1=1693829039&P2=404&P3=2&P4=ZScHiC76YwInOFeOtZqb6lrgNR6yox4YoD7uLUtr3U4gLCNU0Eu7cjyL%2frkMmyhtUBV4BsIpv9OA6xIgTqKFCg%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":99,\"nextfp\":\"1.8C44D387A3E4B451564118A0C4B15B3F23D9A7B8F9292A875846BE87B85B702F\",\"nextversion\":\"309.45740.1.0\",\"previousfp\":\"1.8C44D387A3E4B451564118A0C4B15B3F23D9A7B8F9292A875846BE87B85B702F\",\"previousversion\":\"1.20230828.1.0\"}],\"installdate\":-1,\"lang\":\"de\","
		"\"packages\":{\"package\":[{\"fp\":\"1.8C44D387A3E4B451564118A0C4B15B3F23D9A7B8F9292A875846BE87B85B702F\"}]},\"version\":\"309.45740.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.2134\"},\"prodversion\":\"116.0.1938.62\",\"protocol\":\"3.1"
		"\",\"requestid\":\"{3e5490f5-88da-4885-9c62-e8c47e46076a}\",\"sessionid\":\"{70e1a7ac-0eeb-43a2-96ed-507b414b93ed}\",\"updaterversion\":\"116.0.1938.62\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"GGLS\",\"cohort\":\"rrf@0.23\",\"enabled\":true,\"event\":[{\"download_time_ms\":4025,\"downloaded\":5624,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2.0.0.1\",\"previousversion\":\"1.1.0.6\",\"total\":5624,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"98e5c67a-a86c-4a7d-81db-6975e766a36c?P1=1693829038&P2=404&P3=2&P4=mII5ipu8husmulfse%2fB3PQV0ta2RN%2fcc9Pn1jy8LLs7Tq71s4eLWYaIWVCBKikaWP9LHnehY3%2fuVi3XQyp4zdQ%3d%3d\"},{\"errorcat\":3,\"errorcode\":16,\"eventresult\":0,\"eventtype\":3,\"install_time_ms\":87,\"nextfp\":\"1.757A02D8CFF3BDE8E7394017BB88A716129B397DB1018F8243C6822FE09668C9\",\"nextversion\":\"2.0.0.1\",\"previousfp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\",\"previousversion\":\"1.1.0.6\"}],\"lang\":\"de"
		"\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"version\":\"1.1.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.2134\"},\"prodversion\":\"116.0.1938.62\",\"protocol\":\"3.1\","
		"\"requestid\":\"{388450c3-4b01-42dc-9388-c1f6945999a3}\",\"sessionid\":\"{70e1a7ac-0eeb-43a2-96ed-507b414b93ed}\",\"updaterversion\":\"116.0.1938.62\"}}", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_revert_auto_header("X-Microsoft-Update-Service-Cohort");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Microsoft Edge\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("booking.pl_4", 
		"URL=http://127.0.0.1:8800/cgi-bin/booking.pl?PAYFIRSTNAME=testuser&PAYLASTNAME=testuser&PAYSTREET=testuser&PAYCITY=testuser&PAYCOUNTRY=testuser&PAYCARD=1234567890&ACTION3=Book&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTFLIGHTID=BWA0001&ACTION2=Next&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_submit_data("itinerary.pl", 
		"Action=http://127.0.0.1:8800/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?PAYFIRSTNAME=testuser&PAYLASTNAME=testuser&PAYSTREET=testuser&PAYCITY=testuser&PAYCOUNTRY=testuser&PAYCARD=1234567890&ACTION3=Book&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=SESSIONID", "Value=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", ENDITEM, 
		LAST);

	web_submit_data("itinerary.pl_2", 
		"Action=http://127.0.0.1:8800/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/itinerary.pl?SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=ACTION", "Value=Remove all", ENDITEM, 
		"Name=SESSIONID", "Value=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", ENDITEM, 
		LAST);

	web_submit_data("logout.pl", 
		"Action=http://127.0.0.1:8800/cgi-bin/logout.pl", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/itinerary.pl?ACTION=Remove+all&SESSIONID=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=SESSIONID", "Value=ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5", ENDITEM, 
		LAST);

	return 0;
}