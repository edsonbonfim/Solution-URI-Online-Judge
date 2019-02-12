lista = [(61, "Brasilia"), (71, "Salvador"), (11, "Sao Paulo"), (21, "Rio de Janeiro"), (32, "Juiz de Fora"), (19, "Campinas"), (27, "Vitoria"), (31, "Belo Horizonte")]

func x [] = "DDD nao cadastrado"
func ddd (h:b) = if fst h == ddd then snd h else func ddd b

main = do
    ddd <- readLn :: IO Int
    putStrLn (func ddd lista)