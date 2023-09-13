Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"Google Chrome\";v=\"116\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Click On Enter the store");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(4);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click On Enter the store",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("Click On Sign In");

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t4.inf", 
		LAST);

	lr_end_transaction("Click On Sign In",LR_AUTO);

	lr_start_transaction("Click On Login");

	web_reg_find("Text=Welcome", 
		LAST);

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_form("Account.action", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=username", "Value=pavan", ENDITEM, 
		"Name=password", "Value=pavan999", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		LAST);

	lr_end_transaction("Click On Login",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("Select A Pet");

	web_image("sm_fish.gif", 
		"Src=../images/sm_fish.gif", 
		"Snapshot=t6.inf", 
		LAST);

	lr_end_transaction("Select A Pet",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("Select a Product Id");

	web_link("FI-SW-02", 
		"Text=FI-SW-02", 
		"Snapshot=t7.inf", 
		LAST);

	lr_end_transaction("Select a Product Id",LR_AUTO);

	lr_start_transaction("Click On Add To Cart");

	web_reg_find("Text=Shopping Cart", 
		LAST);

	lr_think_time(25);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t8.inf", 
		LAST);

	lr_end_transaction("Click On Add To Cart",LR_AUTO);

	lr_think_time(53);

	lr_start_transaction("Click On Proceed To Check out");

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t9.inf", 
		LAST);

	lr_end_transaction("Click On Proceed To Check out",LR_AUTO);

	lr_start_transaction("Click On Continue");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	lr_think_time(19);

	web_submit_form("Order.action", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=k", ENDITEM, 
		"Name=order.billToLastName", "Value=n", ENDITEM, 
		"Name=order.billAddress1", "Value=gdchhh", ENDITEM, 
		"Name=order.billAddress2", "Value=ndcjknvjn", ENDITEM, 
		"Name=order.billCity", "Value=dhjvj", ENDITEM, 
		"Name=order.billState", "Value=cdnj", ENDITEM, 
		"Name=order.billZip", "Value=51423", ENDITEM, 
		"Name=order.billCountry", "Value=india", ENDITEM, 
		"Name=shippingAddressRequired", "Value=<OFF>", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		LAST);

	lr_end_transaction("Click On Continue",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("Click On Confirm");

	web_link("Confirm", 
		"Text=Confirm", 
		"Snapshot=t11.inf", 
		LAST);

	lr_end_transaction("Click On Confirm",LR_AUTO);

	lr_think_time(35);

	lr_start_transaction("Click On Retrun Main Menu");

	web_link("Return to Main Menu", 
		"Text=Return to Main Menu", 
		"Snapshot=t12.inf", 
		LAST);

	lr_end_transaction("Click On Retrun Main Menu",LR_AUTO);

	lr_start_transaction("Click On Sign Out");

	web_link("Sign Out", 
		"Text=Sign Out", 
		"Snapshot=t13.inf", 
		LAST);

	lr_end_transaction("Click On Sign Out",LR_AUTO);

	return 0;
}