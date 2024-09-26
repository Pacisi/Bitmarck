Action()
{


lr_start_transaction("01_Startseite");

   	web_reg_find("Text=Welcome to WakaTours",LAST);	

	web_url("127.0.0.1:8800", 
		"URL=http://127.0.0.1:8800/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

lr_end_transaction("01_Startseite",LR_AUTO);	


lr_start_transaction("02_Login");

   	web_reg_find("Text=Password:",LAST);

	web_url("login.pl", 
		"URL=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);
   	
lr_end_transaction("02_Login",LR_AUTO);



/*Correlation comment - Do not change!  Original value='ECF30576F2369848AAB470A1E176E16288DDA91F1E23283349B37464CA94BBD5' Name ='SESSIONID' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=SESSIONID",
		"TagName=input",
		"Extract=value",
		"Name=SESSIONID",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);
		
lr_start_transaction("03_Enter");

	web_reg_find("Text=welcome to your personal booking area",LAST);

	web_url("login.pl_2", 
		"URL=http://127.0.0.1:8800/cgi-bin/login.pl?USER={User}&PASSWORD={User}&ACTION=Login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);
lr_end_transaction("03_Enter",LR_AUTO);

lr_start_transaction("04_Booking");

    web_reg_find("Text=Find Flight(s)",LAST);

	web_submit_data("booking.pl",
		"Action=http://127.0.0.1:8800/cgi-bin/booking.pl",
		"Method=GET",
		"EncType=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/login.pl?USER={User}&PASSWORD={User}&ACTION=Login",
		"Snapshot=t35.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=SESSIONID", "Value={SESSIONID}", ENDITEM,
		LAST);

lr_end_transaction("04_Booking",LR_AUTO);

lr_start_transaction("05_FindFlights");

	web_reg_find("Text=Find Flight Time",LAST);

	web_submit_data("booking.pl_2",
		"Action=http://127.0.0.1:8800/cgi-bin/booking.pl",
		"Method=GET",
		"EncType=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?SESSIONID={SESSIONID}",
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
		"Name=SESSIONID", "Value={SESSIONID}", ENDITEM,
		LAST);
	
lr_end_transaction("05_FindFlights",LR_AUTO);


lr_start_transaction("06_FindFlightTime");

	web_reg_find("Text=Payment Details",LAST);

	web_url("booking.pl_3",
		"URL=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTFLIGHTID=BWA0001&ACTION2=Next&SESSIONID={SESSIONID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTCITYID=CGN&DEPARTDATE=29%2F08%2F2022&ARRIVECITYID=HAM&RETURNDATE=&PASSENGERS=1&PREFERENCEID=NONE&CLASSID=COACH&ACTION1=Next&SESSIONID={SESSIONID}",
		"Snapshot=t39.inf",
		"Mode=HTTP",
		LAST);
	
lr_end_transaction("06_FindFlightTime",LR_AUTO);


lr_start_transaction("07_PaymentDetails");

    web_reg_find("Text=Invoice",LAST);

	web_url("booking.pl_4",
		"URL=http://127.0.0.1:8800/cgi-bin/booking.pl?PAYFIRSTNAME={User}&PAYLASTNAME={User}&PAYSTREET={User}&PAYCITY={User}&PAYCOUNTRY={User}&PAYCARD=1234567890&ACTION3=Book&SESSIONID={SESSIONID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?DEPARTFLIGHTID=BWA0001&ACTION2=Next&SESSIONID={SESSIONID}",
		"Snapshot=t42.inf",
		"Mode=HTTP",
		LAST);
    
lr_end_transaction("07_PaymentDetails",LR_AUTO);

lr_start_transaction("08_Itinerary");

    web_reg_find("Text=Itinerary",LAST);
    
	web_submit_data("itinerary.pl",
		"Action=http://127.0.0.1:8800/cgi-bin/itinerary.pl",
		"Method=GET",
		"EncType=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/booking.pl?PAYFIRSTNAME={User}&PAYLASTNAME={User}&PAYSTREET={User}&PAYCITY={User}&PAYCOUNTRY={User}&PAYCARD=1234567890&ACTION3=Book&SESSIONID={SESSIONID}",
		"Snapshot=t43.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=SESSIONID", "Value={SESSIONID}", ENDITEM,
		LAST);
    
lr_end_transaction("08_Itinerary",LR_AUTO);

lr_start_transaction("09_RemoveAll");

	web_reg_find("Text=Number of Flight Bookings: 0",LAST);
	
	web_submit_data("itinerary.pl_2",
		"Action=http://127.0.0.1:8800/cgi-bin/itinerary.pl",
		"Method=GET",
		"EncType=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/itinerary.pl?SESSIONID={SESSIONID}",
		"Snapshot=t44.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=ACTION", "Value=Remove all", ENDITEM,
		"Name=SESSIONID", "Value={SESSIONID}", ENDITEM,
		LAST);
	
lr_end_transaction("09_RemoveAll",LR_AUTO);

lr_start_transaction("10_Logout");

	web_reg_find("Text=Welcome to WakaTours",LAST);

	web_submit_data("logout.pl",
		"Action=http://127.0.0.1:8800/cgi-bin/logout.pl",
		"Method=GET",
		"EncType=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:8800/cgi-bin/itinerary.pl?ACTION=Remove+all&SESSIONID={SESSIONID}",
		"Snapshot=t45.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=SESSIONID", "Value={SESSIONID}", ENDITEM,
		LAST);

lr_end_transaction("10_Logout",LR_AUTO);

	return 0;
}