#ifndef DISPLAY_HPP
# define DISPLAY_HPP

class Display
{
	private:
		Display();
		Display(const Display& ref);
		~Display();

		Display&	operator=(const Display& ref);
	public:
		static void character(char c);
		static void integer(int i);
		static void floatNumber(float f);
		static void doubleNumber(double d);
		static void nan();
		static void inf(std::string str);
};

#endif