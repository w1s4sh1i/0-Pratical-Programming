while True:
    try:
        print("vai ter %s!" %("copa" if int(input()) == 0 else "duas"))
    except EOFError:
        break
