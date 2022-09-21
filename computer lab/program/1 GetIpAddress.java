import java.net.*;
public class GetIpAddress{
public static void main(String args[])
throws Exception
{
InetAddress addr=InetAddress.getLocalHost();
System.out.println("Local Host Address: "+addr.getHostAddress());
String hostname=addr.getHostName();
System.out.println("Local Host Name: "+hostname);
}
}

