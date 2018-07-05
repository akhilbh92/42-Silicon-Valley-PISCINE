ldapsearch -Q -LLL "sn=*bon*" -o "sn=bon*" -o "sn=*bon" sn | grep sn | wc -l | bc
