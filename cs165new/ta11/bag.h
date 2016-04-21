#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
class Bag
{
	private:
		int _capacity;
		int _size;
		int _currentAddIndex;
		int* _data;

	public:
		Bag(); // Default constructor
				
		// Getters
		int getCapacity();
		int getCount();

		int getItem(int index);
		void addItem(int item);
};

#endif

