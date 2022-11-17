#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;

	int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchips = 0;

	int srooms=0, spasta = 0, sburger = 0, snoodles = 0, sshake=0, schips = 0;

	int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chips = 0;

	cout << "\n\t quantity of items we have";
	cout << "\n rooms available :";
	cin >> qrooms;
	cout << "\n quantity of pasta:";
	cin >> qpasta;
	cout << "\n quantity of burger:";
	cin >> qburger;
	cout << "\n quantity of noodles:";
	cin >> qnoodles;
	cout << "\n quantity of shake:";
	cin >> qshake;
	cout << "\n quantity of chips:";
	cin >> qchips;

	m:

	cout << "\n\t\t\t please select from the menu options";
	cout << "\n\n 1) rooms";
	cout << "\n 2) pasta";
	cout << "\n 3) burger";
	cout << "\n 4) noodles";
	cout << "\n 5) shake";
	cout << "\n 6) chips";
	cout << "\n 7) information regarding sales and collection";
	cout << "\n 8) exit";


	cout << "please enter your choice";
	cin >> choice;

{}
	switch (choice)
	{
	case 1:
		cout << "\n\n enter the number of rooms yuo want:";
		cin >> quant;
		if (qrooms - srooms >= quant)
		{
			srooms = srooms + quant;
			total_rooms = total_rooms + quant * 1200;
			cout << "\n\n\t\t" << quant << "room/rooms have been alotted to you!";

		}

		else
			cout << "\n\tonly" << qrooms - srooms << "rooms remaining in hotel";
			break;


	case 2:
		cout << "\n\n enter pasta quantity:";
		cin >> quant;
		if (qpasta - spasta>= quant)
		{
			spasta = spasta + quant;
			total_rooms = total_rooms + quant * 250;
			cout << "\n\n\t\t" << quant << "pasta is the order!";

		}

		else
			cout << "\n\tonly" << qpasta - spasta<< "pasta remaining in hotel";
		break;


	case 3:
		cout << "\n\n enter burger quantity:";
		cin >> quant;
		if (qburger - sburger >= quant)
		{
			sburger = sburger + quant;
			total_burger = total_burger + quant * 250;
			cout << "\n\n\t\t" << quant << "burger is the order!";

		}

		else
			cout << "\n\tonly" << qburger - sburger << "burger remaining in hotel";
		break;


	case 4:
		cout << "\n\n enter noodles quantity:";
		cin >> quant;
		if (qnoodles - snoodles >= quant)
		{
			snoodles = snoodles + quant;
			total_noodles = total_noodles + quant * 250;
			cout << "\n\n\t\t" << quant << "noodles is the order!";

		}

		else
			cout << "\n\tonly" << qnoodles - snoodles<< "burger remaining in hotel";
		break;


	case 5:
		cout << "\n\n enter shake quantity:";
		cin >> quant;
		if (qshake - sshake >= quant)
		{
			sshake = sshake + quant;
			total_shake = total_shake + quant * 250;
			cout << "\n\n\t\t" << quant << "shake is the order!";

		}

		else
			cout << "\n\tonly" << qshake - sshake << "shake remaining in hotel";
		break;



	case 6:
		cout << "\n\n enter chips quantity:";
		cin >> quant;
		if (qchips - schips >= quant)
		{
			schips = schips + quant;
			total_chips = total_chips + quant * 250;
			cout << "\n\n\t\t" << quant << "chips is the order!";

		}

		else
			cout << "\n\tonly" << qchips - schips << "chips remaining in hotel";
		break;
    
	case 7: 
		cout << "\n\tdetails of sales and collection";
		cout << "\n\n number of rooms we had: " << qrooms;
		cout << "\n\n number of rooms we gave for rent " << srooms;
		cout << "\n\n remaining of rooms :" << qrooms - srooms;
		cout << "\n\n total rooms collection for the day: " << total_rooms;


		cout << "\n\n number of pasta we had: " << qpasta;
		cout << "\n\n number of pasta we sold" << spasta;
		cout << "\n\n remaining of pasta :" << qpasta - spasta;
		cout << "\n\n total pasta collection : " << total_pasta;


		cout << "\n\n number of burger we had: " << qburger;
		cout << "\n\n number of burger we sold" << sburger;
		cout << "\n\n remaining of burger :" << qburger - sburger;
		cout << "\n\n total buger collection for the day: " << total_burger;


		cout << "\n\n number of noodels we had: " << qnoodles;
		cout << "\n\n number of noodles we sold" << snoodles;
		cout << "\n\n remaining of noodles :" << qnoodles - snoodles;
		cout << "\n\n total noodles collection for the day: " << total_noodles;

		cout << "\n\n number of shake we had: " << qshake;
		cout << "\n\n number of shake we sold" << sshake;
		cout << "\n\n remaining of shake :" << qshake - sshake;
		cout << "\n\n total shakecollection for the day: " << total_shake;



		cout << "\n\n number of chips we had: " << qchips;
		cout << "\n\n number of chips we sold" << schips;
		cout << "\n\n remaining of chips :" << qchips - schips;
		cout << "\n\n total chips collection for the day: " << total_chips;


		cout << "\n\n\n total collection for the day:" << total_rooms + total_pasta + total_burger + total_noodles + total_shake + total_chips;
		break;

	case 8:

		exit(0);

	default:

		cout << "\n please select the numbers that are mentioned above";



	}

	goto m;
}