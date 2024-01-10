def takeList(itms):
    for i in range(len(itms)):
        if i != len(itms) - 2:
            print('{:s}'.format(str(itms[i]), end=', ', sep=''))
        else:
            print('{:s}'.format(str(itms[i]), end=', and '))

spam = ['apples', 'bananas', 'tofu', 'cats']
takeList(spam)
