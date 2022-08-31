def Merge(dict_1, dict_2, dict_3):
	result = dict_1 | dict_2 | dict_3
	return result
	
# Driver code
dict_1 = {'John': 15, 'Risgck': 10, 'Misgfsgsa' : 12 }
dict_2 = {'Bonnie': 18,'Ridck': 20,'Mafftt' : 16 }
dict_3 = {'lonnie': 18444,'Ridfffck': 240,'Matst' : 146 }
dict_4 = Merge(dict_1, dict_2, dict_3)
print(dict_4)